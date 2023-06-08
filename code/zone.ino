
void zone() {
  
    while(z<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
    
    if(tecla =='A'){
     lcd.begin(16, 2);
     lcd.clear();
    lcd.setCursor (0, 0);
    lcd.print("Pressed : A");
    lcd.setCursor (0, 1);
    lcd.print("PA selected");
    delay(2000);
    pass();
    delay(3000); 
    lcd.clear();
    y=1;
    z=1;

    }
    
         
    if(tecla =='D'){
      lcd.clear();
        lcd.setCursor (0, 0);
    lcd.print("Pressed : D");
   // delay(800);
    lcd.setCursor (0, 1);
    lcd.print("No Change selectd");
    delay(2000);
    nochange();
    }
         if(tecla =='B')
     {lcd.begin(16, 2);   
       lcd.clear();
     eread();
      z=1;  
    }
     if(tecla =='C')
     {lcd.begin(16, 2);   
       lcd.clear();
    lcd.print("Please Wait....");
delay(2000);
    testsms();
    lcd.print("SMS Send");
    delay(3000);
    lcd.clear();
z=1;  
    }
     if(tecla =='#')
     {lcd.begin(16, 2);   
       lcd.clear();
    // MSN();
      //y=1;
z=1;  
    }
   // if(tecla =='0')
    // {   lcd.begin(20, 4); 
   //  lcd.clear();
   //      lcd.print("Siren off");
  //  digitalWrite(horn, LOW);
//  count=0;
 // delay(2000);
 
       //y=1;
//z=1; 
// lcd.clear();
 
   // }

   }

}

/***ZONE 2 SENSORS

void ZoneSense2() {


  while(y<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='D')
          {
          lcd.begin(20, 4);
          lcd.clear();
          lcd.setCursor (0, 0);
          lcd.print("Pressed : D");
          lcd.setCursor (0, 1);
          lcd.print("All erage selected");
          delay(800);
         // erage();
           delay(2000);
           lcd.setCursor (0, 1);
            //lcd.print("All data eraged successfully");
            //delay(3000);
            lcd.clear();
             y=1;
             z=1;
        }
         
   
          if(tecla =='C')
          {  
          lcd.begin(20, 4);
          lcd.clear();
          lcd.setCursor (0, 0);
          lcd.print("Pressed : C");
          delay(1000);
          lcd.setCursor (0, 1);
          lcd.print("specific id selected");
//          ierage();
          delay(3000);
          lcd.clear();
          y=1;
          z=1;
            }
          
          if(tecla =='#')
     {lcd.begin(20, 4);   
       lcd.clear();
    // MSN();
      y=1;
z=1;  
    }
          }

}

*/
