char ch;
void setup() 
{
  Serial.begin(9600);//定义以9600波特率传输数据
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);    //初始化输出端口状态，数码管共阴极，初始电压为0
}

void loop()
{
  if (Serial.available()) //确认串口有输入
  {
    ch=Serial.read();   //将字符型输入赋值给ch
    int x = (ch - '0');   //将字符型转为相应数字，赋值给x
    int a1[]={1,0,0,0};
    int a2[]={0,0,0,1};
    int a3[]={1,0,0,1};
    int a4[]={0,0,1,0};
    int a5[]={1,0,1,0};
    int a6[]={0,0,1,1};
    int a7[]={1,0,1,1};
    int a8[]={0,1,0,0};
    int a9[]={1,1,0,0};
    int a0[]={0,0,0,0};   //每个数字对应的2~6端口输出值
    switch(x)
    {
      case 1:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a1[n]);    //数字为“1”时，为对应的输出端口赋值
      }
      break;
      
      
      case 2:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a2[n]);    //数字为“2”时，为对应的输出端口赋值
      }
      break;

      
      case 3:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a3[n]);    //数字为“3”时，为对应的输出端口赋值
      }
      break;


      case 4:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a4[n]);    //数字为“4”时，为对应的输出端口赋值
      }
      break;


      case 5:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a5[n]);    //数字为“5”时，为对应的输出端口赋值
      }
      break;


      case 6:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a6[n]);    //数字为“6”时，为对应的输出端口赋值
      }
      break;


      case 7:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a7[n]);    //数字为“7”时，为对应的输出端口赋值
      }
      break;


      case 8:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a8[n]);    //数字为“8”时，为对应的输出端口赋值
      }
      break;


      case 9:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a9[n]);    //数字为“9”时，为对应的输出端口赋值
      }
      break;


      case 0:
      for(int n=2;n<=5;n++)
      {
        digitalWrite(n,0);    //清除原有笔划
      }
      for(int n=0;n<=3;n++)
      {
        digitalWrite(n+2,a0[n]);    //数字为“0”时，为对应的输出端口赋值
      }
      break;
    }
}}
