
void frontD()
{    //lcd.clear();

   lcd.setCursor(0, 2);
  // print the number of seconds since reset:
  lcd.print(" 10 SIGNAL BATTALION");
    lcd.setCursor(1, 1);
  // print the number of seconds since reset:
 lcd.print("     AMMO STORE");
}

void rpassw()
{
  lcd.clear();
// digitalWrite(horn, HIGH); 
lcd.print("Wrong Password....");
lcd.setCursor(0,1);
lcd.print(" Wrong Password...");

//ridsent();
//ridlcd();
//x=1;
}

void soff()
{
   lcd.clear();
lcd.print(" System permanantly");
lcd.setCursor(6,1);
lcd.print(" LOCKED");

delay(2000);
lcd.clear();
}


void wr()
{
  
   /* digitalWrite(buz, HIGH); 
  delay(400);              
  digitalWrite(buz, LOW);    
  delay(400);
    digitalWrite(buz, HIGH); 
  delay(400);              
  digitalWrite(buz, LOW);    
  delay(400);
   digitalWrite(buz, HIGH); 
  delay(400); 
   digitalWrite(buz, LOW); 
   */
   }
   

void r()
{
  /*  digitalWrite(buz, HIGH); 
  delay(100);              
  digitalWrite(buz, LOW);    
  delay(20);
    digitalWrite(buz, HIGH); 
  delay(100);              
  digitalWrite(buz, LOW);    
  delay(20);
   digitalWrite(buz, HIGH); 
  delay(100); 
   digitalWrite(buz, LOW); 
   */
}

/*
void ll()
{

 SIM900.listen();
  if(SIM900.available() >0)
  {
   kk();
  
 }
}  
  

/*void kk()
  {
    inchar=SIM900.read();
    
      if (inchar=='g')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='i')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='s')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='0')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='1')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='o')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='c')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='d')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='o')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='n')
      {
          digitalWrite(buz, HIGH);
          sen();
        }
        else if (inchar=='f')
        {
          delay(10);
        inchar=SIM900.read();
      if (inchar=='f')
          digitalWrite(buz, LOW);
          senth();
        }
        delay(10);
        // SIM900.println("AT+CMGD=1,4"); // delete all SMS
      }
    }
  }
      }}}}}}}



void kk()
{
  inchar=SIM900.read();
    
      if (inchar=='9')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='6')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='5')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='1')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='6')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='5')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='3')
      {
        delay(10);
        inchar=SIM900.read();
     
     
     
      if (inchar=='6')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='3')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='1')
      {
        lcd.clear();
        lcd.print("1111");delay(4000);
        //  digitalWrite(srelay, LOW);
          srs=0;
       //   se();
           SIM900.println("AT+CMGD=1,4");
        }
        else if (inchar=='2')
        {
          delay(10);
        inchar=SIM900.read();
      if (inchar=='2')
         {  lcd.clear();
        lcd.print("2222");delay(4000);
          //digitalWrite(srelay, HIGH);
         srs=1;
    //      senthe();
           SIM900.println("AT+CMGD=1,4");
        }
        delay(10);
       SIM900.println("AT+CMGD=1,4"); // delete all SMS
      }
    }
      }
    
    
    
    
    
 else  if (inchar=='4')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='3')
      {
        delay(10);
        inchar=SIM900.read();
      if (inchar=='1')
      { lcd.clear();
        lcd.print("4444");delay(4000);
          //digitalWrite(buz, HIGH);
          gateclose();
          count2=2;
  //        sen();
           SIM900.println("AT+CMGD=1,4");
           count2=2;
        }
        else if (inchar=='2')
        {
          delay(10);
        inchar=SIM900.read();
      if (inchar=='2')
      {   gateopen();
                    count2=1; lcd.clear();
        lcd.print("555");
        delay(4000);
          //digitalWrite(buz, LOW);
  //        senth();
        }
        delay(10);
       SIM900.println("AT+CMGD=1,4"); // delete all SMS
     count2=1; }
    } 
      }
    
    
    
    
    
    
  }
      }}}}}}}
*/
