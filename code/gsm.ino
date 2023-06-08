void sentopen()
{
no();

SIM900.println("AT");
delay(1000);
SIM900.println("AT+CMGF=1"); // send SMS in text mode
delay(1000);
//Serial.println("AT+CMGS=\"+8801684981682\""); 
SIM900.println("AT+CMGS=\"" + aua +"\"");
delay(1000);
SIM900.print("Door is open"); // content of the message
Serial.println("ok");
SIM900.write(26); // ctrl+z ASCII code
delay(30000); // Wait for 3 minutes before next reading

}

void sentclose()
{
no();

SIM900.println("AT");
delay(1000);
SIM900.println("AT+CMGF=1"); // send SMS in text mode
delay(1000);
//Serial.println("AT+CMGS=\"+8801684981682\""); 
SIM900.println("AT+CMGS=\"" + aua +"\"");
delay(1000);
SIM900.print("Door is close"); // content of the message
Serial.println("ok");
SIM900.write(26); // ctrl+z ASCII code
delay(30000); // Wait for 3 minutes before next reading

}
void sent()
{
no();

SIM900.println("AT");
delay(1000);
SIM900.println("AT+CMGF=1"); // send SMS in text mode
delay(1000);
//SIM900.println("AT+CMGS=\"+8801704731703\""); //+8801769552138
SIM900.println("AT+CMGS=\"" + aua +"\"");
delay(1000);
SIM900.print("SY LOCK MOV DETECTED"); // content of the message
Serial.println("ok");
SIM900.write(26); // ctrl+z ASCII code
delay(3000); // Wait for 3 minutes before next reading

}



void sysready()
{
  no();
SIM900.println("AT");
delay(1000);
SIM900.println("AT+CMGF=1"); 
delay(1000);
//SIM900.println("AT+CMGS=\"+8801704731703\""); //+8801769552138
SIM900.println("AT+CMGS=\"" + aua +"\"");
delay(1000);
SIM900.print("Bio Sy Sys Ready"); 
//SIM900.print("i love you send from army kote managment system device :)"); 
Serial.println("system ready");
SIM900.write(26); 
}

void testsms()
{
  no();
SIM900.println("AT");
delay(1000);
SIM900.println("AT+CMGF=1"); 
delay(1000);
//SIM900.println("AT+CMGS=\"+8801704731703\""); //+8801769552138
SIM900.println("AT+CMGS=\"" + aua +"\"");
delay(1000);
//SIM900.print("Bio Sy Sys Ready"); 
SIM900.print("This is a test SMS"); 
Serial.println("system ready");
SIM900.write(26); 
}
