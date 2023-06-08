
 
 
 void kk()
 {
  if(SIM900.available() >0)
  {
    inchar=SIM900.read();
    if (inchar=='0')
    {
      delay(10);
      inchar=SIM900.read();
      if (inchar=='1')
      {
       delay(10);
       inchar=SIM900.read();
       if (inchar=='2')
        {
         delay(10);
         inchar=SIM900.read();
         if (inchar=='3')
           {
            delay(10);
            inchar=SIM900.read();
            if (inchar=='4')
             {
               delay(10);
               inchar=SIM900.read();
               if (inchar=='o')
                {
                  lcd.clear();
                  lcd.print("Door opened by");
                  lcd.setCursor(0,1);
                  lcd.print("      SMS");
                  delay(3000);
                  gateopen();
                  sentopen();
                  lcd.clear();
                 }
        
                else if (inchar=='c')
                {
                lcd.clear();
                lcd.print("Door closed by");
                lcd.setCursor(0,1);
                lcd.print("      SMS");
                delay(3000);
                gateclose();
                sentclose();
                lcd.clear();
               }
                delay(10);
               // SIM900.println("AT+CMGD=1,4"); // delete all SMS
           }
        }
      }
    }
   }
  }
 }
