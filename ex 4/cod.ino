
const int bot1 = 4;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(bot1, INPUT);
}

int var1;
  
void loop()
{
  var1 = digitalRead(bot1);
  
  if(var1){
   digitalWrite(led1, HIGH);
    
  }else{
   digitalWrite(led1, LOW);
    
  }
  delay(10);
}
