

byte val;

void setup()
{
  Serial.begin(9600);//Change the baud rate value depending on the default baud rate of your bluetooth module, for Bluesmirf-115200 and for JY-MCU-9600
  
  pinMode(2, OUTPUT);//Light1 pin
 
}

void loop()
{
 int a=0;
 if(Serial.available())
  {
    val=Serial.read();
    Serial.println(int(val));//Display received value on Serial Monitor

if(int(val)==102)//Turn Light1 ON
   digitalWrite(2,HIGH);

 else if ((int(val)==110)||(int(val)==79))//Turn Light1 OFF
         digitalWrite(2,LOW);

if(int(val)==102)//Turn Light1 ON
   digitalWrite(3,HIGH);

 else if ((int(val)==110)||(int(val)==79))//Turn Light1 OFF
         digitalWrite(3,LOW);
         
if(int(val)==102)//Turn Light1 ON
   digitalWrite(4,HIGH);

 else if ((int(val)==110)||(int(val)==79))//Turn Light1 OFF
         digitalWrite(4,LOW);
if(int(val)==102)//Turn Light1 ON
   digitalWrite(5,HIGH);

 else if ((int(val)==110)||(int(val)==79))//Turn Light1 OFF
         digitalWrite(5,LOW);
}
}
