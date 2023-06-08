void no()
{
aua='+';

au=EEPROM.read(0);
bu=EEPROM.read(1);
cu=EEPROM.read(2);
du=EEPROM.read(3);
eu=EEPROM.read(4);
fu=EEPROM.read(5);
ggu=EEPROM.read(6);
hu=EEPROM.read(7);
iku=EEPROM.read(8);

ju=EEPROM.read(9);

keu=EEPROM.read(10);
lu=EEPROM.read(11);
mu=EEPROM.read(12);

aua += au;
aua += bu;
aua += cu;
aua += du;
aua += eu;
aua += fu;
aua += ggu;
aua += hu;
aua += iku;
aua += ju;
aua += keu;
aua += lu;
aua += mu;
//Serial.println(a);
//Serial.println(b);
//Serial.println(c);
//Serial.println(d);
//Serial.println(e);
//Serial.println(f);
//Serial.println(g);
//erial.println(h);
//Serial.println(i);
//Serial.println(j);
//Serial.println();


Serial.println(aua);
lcd.clear();
lcd.print(" Mobile Number");
lcd.setCursor(0,1);
lcd.print(aua);
//Serial.println();
delay(3000);
lcd.clear();
}

