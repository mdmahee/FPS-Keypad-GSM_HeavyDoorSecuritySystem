void rem()
{  if (srs==1)
  {lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("      System");
lcd.setCursor(0, 1);
  lcd.print("        is");
    lcd.setCursor(0, 2);
  lcd.print("      locked");
    lcd.setCursor(0, 3);
  lcd.print(" Please do not try_");
  count=count+1;
      lcd.setCursor(19, 3);
  lcd.print(count);
   delay(5000);
   lcd.clear();
  }
  
  else if(srs==0)
  {
  lcd.clear();
  //lcd.print("a pressed");
count=0;
  lcd.setCursor(0, 0);
    lcd.print(" Please press your_");

  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  lcd.print("       finger");
    lcd.setCursor(0, 2);
  // print the number of seconds since reset:
  lcd.print("         on");
    lcd.setCursor(0, 3);
  // print the number of seconds since reset:
  lcd.print("Finger print scanner");
   delay(2000); delay(1000);
  /* fps.SetLED(true);
   delay(500);
   fps.SetLED(false);
   delay(500);
   fps.SetLED(true);
   delay(500);
   fps.SetLED(false);
   delay(500);
  finger();
fps.SetLED(false);
*/
lcd.clear();}
}
