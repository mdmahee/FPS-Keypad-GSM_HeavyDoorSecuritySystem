void gateopen()
{
  digitalWrite(actp, LOW);
  digitalWrite(actn, HIGH);
  //delay(3000);  
  //closewar();
}


void gateclose()
{
  digitalWrite(actp, HIGH);
  digitalWrite(actn, LOW);
  //delay(3000);  
  //closewar();
}
