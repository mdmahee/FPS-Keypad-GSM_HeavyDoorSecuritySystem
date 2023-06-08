void enochnge()
{
      EEPROM.write(0, 8);
    delay(50);
    EEPROM.write(1, 8);
    delay(50);
     EEPROM.write(2, 0);
    delay(50);
    EEPROM.write(3, 1);
     lcd.begin(16, 2);
     lcd.clear();
    lcd.setCursor (0, 0);
    lcd.print("Pressed :"); 
 lcd.setCursor (0, 1);
    lcd.print("+8801"); 

    
 while(v<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
  
    if(tecla =='6')
    {
    lcd.setCursor (5, 1);
    lcd.print("6");
    EEPROM.write(4, 6);
    delay(50);
    llnd();
   // y=1;
   // z=1;
    }
   else if(tecla =='7')
    {
    lcd.setCursor (5, 1);
    lcd.print("7");
    EEPROM.write(4, 7);
    llnd();
   // y=1;
   // z=1;
    }
   else if(tecla =='8')
    {
    lcd.setCursor (5, 1);
    lcd.print("8");
    EEPROM.write(4, 8);
    llnd();
   // y=1;
   // z=1;
    }
   else if(tecla =='9')
    {
    lcd.setCursor (5, 1);
    lcd.print("9");
    EEPROM.write(4, 9);
    llnd();
   // y=1;
   // z=1;
    }
    else if(tecla =='5')
    {
    lcd.setCursor (5, 1);
    lcd.print("5");
    EEPROM.write(4, 5);
    llnd();
   // y=1;
   v=1;
    }







    }
}

void llnd()
{ while(va<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
   //  lcd.begin(16, 2);
    // lcd.clear();
   // lcd.setCursor (0, 0);
  //  lcd.print("Press 2st bit"); 

    lcd.setCursor (6, 1);
    if(tecla =='0')
    {
    //lcd.setCursor (0, 1);
    lcd.print("0");
    EEPROM.write(5, 0);
    lllnd();
   // y=1;
   // z=1;
    }
     else   if(tecla =='1')
    {
   // lcd.setCursor (0, 1);
    lcd.print("1");
    EEPROM.write(5, 1);
    lllnd();
   // y=1;
   // z=1;
    }
   else if(tecla =='2')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("2");
    EEPROM.write(5, 2);
    lllnd();
   // y=1;
   // z=1;
    }
   else if(tecla =='3')
    {
   // lcd.setCursor (0, 1);
    lcd.print("3");
    EEPROM.write(5, 3);
   lllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='4')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("4");
    EEPROM.write(5, 4);
    lllnd();
   // y=1;
   // z=1;
    }

  else  if(tecla =='5')
    {
   // lcd.setCursor (0, 1);
    lcd.print("5");
    EEPROM.write(5, 5);
    lllnd();
   // y=1;
   // z=1;
    }

  else  if(tecla =='6')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("6");
     EEPROM.write(5, 6);
   lllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='7')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("7");
    EEPROM.write(5, 7);
    lllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='8')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("8");
    EEPROM.write(5, 8);
    lllnd();
   // y=1;
   // z=1;
    }

  else  if(tecla =='9')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("9");
    EEPROM.write(5, 9);
    lllnd();
   // y=1;
   // z=1;
    }
  
}
va=1;
}

void lllnd()
{ while(vb<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
   //  lcd.begin(16, 2);
  //   lcd.clear();
  //  lcd.setCursor (0, 0);
 //   lcd.print("Press 3st bit"); 
 lcd.setCursor (7, 1);
    
    if(tecla =='0')
    {
   // lcd.setCursor (0, 1);
    lcd.print("0");
    EEPROM.write(6, 0);
    llllnd();
   // y=1;
   // z=1;
    }
  else      if(tecla =='1')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("1");
    EEPROM.write(6, 1);
    llllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='2')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("2");
    EEPROM.write(6, 2);
    llllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='3')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("3");
    EEPROM.write(6, 3);
    llllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='4')
    {
   // lcd.setCursor (0, 1);
    lcd.print("4");
    EEPROM.write(6, 4);
    llllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='5')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("5");
    EEPROM.write(6, 5);
    llllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='6')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("6");
    EEPROM.write(6, 6);
    llllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='7')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("7");
    EEPROM.write(6, 7);
   llllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='8')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("8");
    EEPROM.write(6, 8);
    llllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='9')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("9");
    EEPROM.write(6, 9);
    llllnd();
   // y=1;
   // z=1;
    }
  
}
vb=1;
}

void llllnd()
{ while(vc<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
    // lcd.begin(16, 2);
    // lcd.clear();
   // lcd.setCursor (0, 0);
 //   lcd.print("Press 4st bit"); 
 lcd.setCursor (8, 1);
    
    if(tecla =='0')
    {
   // lcd.setCursor (0, 1);
    lcd.print("0");
    EEPROM.write(7, 0);
    lllllnd();
   // y=1;
   // z=1;
    }
  else      if(tecla =='1')
    {
   // lcd.setCursor (0, 1);
    lcd.print("1");
    EEPROM.write(7, 1);
    lllllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='2')
    {
   // lcd.setCursor (0, 1);
    lcd.print("2");
    EEPROM.write(7, 2);
    lllllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='3')
    {
   // lcd.setCursor (0, 1);
    lcd.print("3");
    EEPROM.write(7, 3);
    lllllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='4')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("4");
    EEPROM.write(7, 4);
    lllllnd();
   // y=1;
   // z=1;
    }

  else  if(tecla =='5')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("5");
    EEPROM.write(7, 5);
    lllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='6')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("6");
    EEPROM.write(7, 6);
    lllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='7')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("7");
    EEPROM.write(7, 7);
    lllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='8')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("8");
    EEPROM.write(7, 8);
    lllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='9')
    {
//    lcd.setCursor (0, 1);
    lcd.print("9");
    EEPROM.write(7, 9);
    lllllnd();
   // y=1;
   // z=1;
    }
}
vc=1;
}

void lllllnd()
{ while(vd<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
  //   lcd.begin(16, 2);
  //   lcd.clear();
  //  lcd.setCursor (0, 0);
  //  lcd.print("Press 5st bit"); 
 lcd.setCursor (9, 1);
    
    if(tecla =='0')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("0");
    EEPROM.write(8, 0);
    llllllnd();
   // y=1;
   // z=1;
    }
   else     if(tecla =='1')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("1");
    EEPROM.write(8, 1);
    llllllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='2')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("2");
    EEPROM.write(8, 2);
    llllllnd();
   // y=1;
   // z=1;
    }
  else  if(tecla =='3')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("3");
    EEPROM.write(8, 3);
   llllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='4')
    {
//    lcd.setCursor (0, 1);
    lcd.print("4");
    EEPROM.write(8, 4);
    llllllnd();
   // y=1;
   // z=1;
    }

else    if(tecla =='5')
    {
//    lcd.setCursor (0, 1);
    lcd.print("5");
    EEPROM.write(8, 5);
    llllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='6')
    {
//    lcd.setCursor (0, 1);
    lcd.print("6");
    EEPROM.write(8, 6);
    llllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='7')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("7");
    EEPROM.write(8, 7);
    llllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='8')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("8");
    EEPROM.write(8, 8);
    llllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='9')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("9");
    EEPROM.write(8, 9);
    llllllnd();
   // y=1;
   // z=1;
    }
}
vd=1;
}


void llllllnd()            //////////11111111111
{ while(ve<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
    // lcd.begin(16, 2);
   //  lcd.clear();
 //   lcd.setCursor (0, 0);
 //   lcd.print("Press 6st bit"); 
 lcd.setCursor (10, 1);
    
    if(tecla =='0')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("0");
    EEPROM.write(9, 0);
    lllllllnd();
   // y=1;
   // z=1;
    }
  else      if(tecla =='1')
    {
   // lcd.setCursor (0, 1);
    lcd.print("1");
    EEPROM.write(9, 1);
    lllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='2')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("2");
    EEPROM.write(9, 2);
    lllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='3')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("3");
    EEPROM.write(9, 3);
    lllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='4')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("4");
    EEPROM.write(9, 4);
    lllllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='5')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("5");
    EEPROM.write(9, 5);
    lllllllnd();
   // y=1;
   // z=1;
    }

else    if(tecla =='6')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("6");
    EEPROM.write(9, 6);
    lllllllnd();
   // y=1;
   // z=1;
    }
else    if(tecla =='7')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("7");
    EEPROM.write(9, 7);
    lllllllnd();
   // y=1;
   // z=1;
    }
else   if(tecla =='8')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("8");
    EEPROM.write(9, 8);
    lllllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='9')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("9");
    EEPROM.write(9, 9);
    lllllllnd();
   // y=1;
   // z=1;
    }
}
ve=1;
}


void lllllllnd()
{ while(vf<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
  //   lcd.begin(16, 2);
  //   lcd.clear();
  //  lcd.setCursor (0, 0);
 //   lcd.print("Press 7st bit"); 
 lcd.setCursor (11, 1);
    
    if(tecla =='0')
    {
   // lcd.setCursor (0, 1);
    lcd.print("0");
    EEPROM.write(10, 0);
    llllllllnd();
   // y=1;
   // z=1;
    }
 else       if(tecla =='1')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("1");
    EEPROM.write(10, 1);
    llllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='2')
    {
//    lcd.setCursor (0, 1);
    lcd.print("2");
    EEPROM.write(10, 2);
    llllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='3')
    {
//    lcd.setCursor (0, 1);
    lcd.print("3");
    EEPROM.write(10, 3);
    llllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='4')
    {
//    lcd.setCursor (0, 1);
    lcd.print("4");
    EEPROM.write(10, 4);
    llllllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='5')
    {
//    lcd.setCursor (0, 1);
    lcd.print("5");
    EEPROM.write(10, 5);
    llllllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='6')
    {
 ///   lcd.setCursor (0, 1);
    lcd.print("6");
    EEPROM.write(10, 6);
    llllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='7')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("7");
    EEPROM.write(10, 7);
    llllllllnd();
   // y=1;
   // z=1;
    }
else    if(tecla =='8')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("8");
    EEPROM.write(10, 8);
    llllllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='9')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("9");
    EEPROM.write(10, 9);
    llllllllnd();
   // y=1;
   // z=1;
    }
}
//v=1;
}

void llllllllnd()
{ while(vg<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
   //  lcd.begin(16, 2);
   //  lcd.clear();
   // lcd.setCursor (0, 0);
   // lcd.print("Press 8st bit"); 
 lcd.setCursor (12, 1);
    
    if(tecla =='0')
    {
   // lcd.setCursor (0, 1);
    lcd.print("0");
    EEPROM.write(11, 0);
    lllllllllnd();
   // y=1;
   // z=1;
    }
   else     if(tecla =='1')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("1");
    EEPROM.write(11, 1);
    lllllllllnd();
   // y=1;
   // z=1;
    }
   else if(tecla =='2')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("2");
    EEPROM.write(11, 2);
    lllllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='3')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("3");
    EEPROM.write(11, 3);
    lllllllllnd();
   // y=1;
   // z=1;
    }
else    if(tecla =='4')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("4");
    EEPROM.write(11, 4);
    lllllllllnd();
   // y=1;
   // z=1;
    }

else    if(tecla =='5')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("5");
    EEPROM.write(11, 5);
    lllllllllnd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='6')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("6");
    EEPROM.write(11, 6);
    lllllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='7')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("7");
    EEPROM.write(11, 7);
    lllllllllnd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='8')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("8");
    EEPROM.write(11, 8);
    lllllllllnd();
   // y=1;
   // z=1;
    }

  else  if(tecla =='9')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("9");
    EEPROM.write(11, 9);
    lllllllllnd();
   // y=1;
   // z=1;
    }
}
vf=1;
}

void lllllllllnd()
{ while(vh<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
   //  lcd.begin(16, 2);
  //   lcd.clear();
  //  lcd.setCursor (8, 0);
  //  lcd.print("Press 9st bit"); 
 lcd.setCursor (13, 1);
    
    if(tecla =='0')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("0");
    EEPROM.write(12, 0);
   nd();
   // y=1;
   // z=1;
    }
 else       if(tecla =='1')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("1");
    EEPROM.write(12, 1);
  nd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='2')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("2");
    EEPROM.write(12, 2);
   nd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='3')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("3");
    EEPROM.write(12, 3);
   nd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='4')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("4");
    EEPROM.write(12, 4);
   nd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='5')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("5");
    EEPROM.write(12, 5);
   nd();
   // y=1;
   // z=1;
    }

 else   if(tecla =='6')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("6");
    EEPROM.write(12, 6);
  nd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='7')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("7");
    EEPROM.write(12, 7);
   nd();
   // y=1;
   // z=1;
    }
 else   if(tecla =='8')
    {
  //  lcd.setCursor (0, 1);
    lcd.print("8");
    EEPROM.write(12, 8);
   nd();
   // y=1;
   // z=1;
    }

  else  if(tecla =='9')
    {
 //   lcd.setCursor (0, 1);
    lcd.print("9");
    EEPROM.write(12, 9);
    delay(1000);
    nd();
   // y=1;
 //  v=1;
    }
}
vh=1;
}


void nd()
{
  eread();
  
  delay(5000);
   x=1;
  s=1;
  g=1;
  y=1;
  z=1;
  v=1;
 va=1;
 vb=1;
 vc=1;
 vd=1;
 ve=1;
 vf=1;
 vg=1;
 vh=1;
 lcd.clear();

}

