


byte val;

void setup()
{
  Serial.begin(9600);
  
  pinMode(2, OUTPUT);//Light pin
  pinMode(3, OUTPUT);//Fan pin
  pinMode(4, OUTPUT);//T.V pin
  pinMode(5, OUTPUT);//AC pin
}

void loop()
{
 int a=0;
 if(Serial.available())
  {
    val=Serial.read();
    Serial.println(int(val));//Display received value on Serial Monitor

if(int(val)==76)//Turn Light ON()
   digitalWrite(2,HIGH);

 else if (int(val)==108)//Turn Light OFF()
         digitalWrite(2,LOW);

if(int(val)==70)//Turn FAN ON()
   digitalWrite(3,HIGH);
   
 else if(int(val)==102)//Turn FAN OFF()
      digitalWrite(3,LOW);
      
if(int(val)==84)//Turn T.V ON()
   digitalWrite(4,HIGH);

 else if(int(val)==116)//Turn T.V OFF()
       digitalWrite(4,LOW);
       
if(int(val)==65)//Turn AC ON()
   digitalWrite(5,HIGH);
   
 else if(int(val)==97)//Turn AC OFF()
       digitalWrite(5,LOW);

}
}
