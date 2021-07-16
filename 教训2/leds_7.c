// C++ code
//
int i=13;
int j=0;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}
 void loop()
 {
   for(i=13;i>6;i--）
       {
         for(j=13;j>6;j--)
         {
           if(j==i)
           {
            digitalWrite(j,HIGH);
           }
           else
           {
               digitalWrite(j,LOW);
           }
           delay(1000);
         }
         delay(1000); // Wait for 1000 millisecond(s)
         
       }
       }
