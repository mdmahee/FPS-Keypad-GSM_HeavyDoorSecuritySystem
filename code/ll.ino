void lll()
  {
 
tecla=customKeypad.getKey();
welcome();
//delay(1000);//old
if(tecla)  // Check for a valid key.
  {
switch(tecla)
  {  
    case '*': // SELECCION PARA LEER SENSORE 1 Y 2 
    lcd.begin(16, 2);
    lcd.clear();
    lcd.setCursor (0, 0);
    lcd.print("Menu Selected :");
    delay(1500); 
    lcd.clear();
    lcd.setCursor (0, 0);
   // lcd.print("A for P: Acces");
    lcd.print("A=Acces B=N.Chk:");
    lcd.setCursor (0,1);
   // lcd.print("D for No. chang");
     lcd.print("C=T.SMS D=N.Chng");
   // delay(1000);
    zone();
    break;  
//MSNinicio();

 
 case 'A': // SELECCION PARA LEER SENSORE 1 Y 2 
   pass();
    break; 
 case 'B': // SELECCION PARA LEER SENSORE 1 Y 2 
   no();
   lcd.print(" Mobile Number");
lcd.setCursor(0,1);
lcd.print(aua);
    while(z<1)
    {
    tecla=customKeypad.getKey(); // CHOOSE ZONE
    delay(50);
    
    if(tecla =='#')
    {

lcd.begin(16, 2);   
       lcd.clear();
    
z=1; 
    }
    }
    break; 
  case 'D': // SELECCION PARA LEER SENSORE 1 Y 2 
  nochange();
  break;    
}
} 
  }
