#include <Keypad.h>
#include <LiquidCrystal.h>
#include <EEPROM.h>
#include <SoftwareSerial.h>

SoftwareSerial SIM900(2, 3);
char inchar;

LiquidCrystal lcd(A5, A4, A3,A2, A1,A0);

const byte ROWS = 4;
const byte COLS = 4;
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {5, 6, 7, 8};
byte colPins[COLS] = {4, 9, 10,11}; 
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

String see;

String aua;
String au;
String bu;
String cu;
String du;
String eu;
String fu;
String ggu;
String hu;
String iku;
String ju;
String keu;
String lu;
String mu;


const int actp=12;
const int actn=13;

const int fp=1;
int fpval=0;
const int ac=0;
int acval=0;
 

char tecla;
int x =0;
int s=0;
int ss=0;
int g=0;
int y =0;
int z =0;
int v=0;
int va=0;
int vb=0;
int vc=0;
int vd=0;
int ve=0;
int vf=0;
int vg=0;
int vh=0;

//int i=0;
//int b=0;
int count=0;
int count2=0;
int srs=0;







void setup()
{
Serial.begin(19200);
SIM900.begin(19200);

lcd.begin(16, 2);
lcd.setCursor(0,0);
lcd.print("   Please wait");
lcd.setCursor(0,1);
lcd.print("  initializing.");
//delay(25000);
delay(1000);
  sysready();  //gsm
  
pinMode(actp,OUTPUT);
pinMode(actn,OUTPUT);
pinMode(fp, INPUT_PULLUP);
pinMode(ac, INPUT_PULLUP);
 
delay(1000);
lcd.clear();
}

void loop() 
{
  x=0;
  s=0;
  g=0;
  y=0;
  z=0;
  v=0;
 va=0;
 vb=0;
 vc=0;
 vd=0;
 ve=0;
 vf=0;
 vg=0;
 vh=0;
acval= digitalRead(ac);
fpval= digitalRead(fp);
//see=EEPROM.read(30);
 /*if (see==1)
  {
    lcd.clear();
    lcd.print("system lock");
    lcd.setCursor(0,1);
    lcd.print("do not try"); 
  }

 if (see==0)
  {
lll();
  }
*/
//ll();

if (fpval== LOW)
{
    lcd.clear();
    lcd.print("New Finger Pressed");
    delay(1000);
    sent();
   count2=count2+1;
   lcd.setCursor(0,1);
    lcd.print("please Wait ....");
    delay(9000);
    lcd.clear();
} 
ll();

lll();


 if (count==4)
  {
    count=1;
  }
  
if(count2==2)
  {
  gateopen();
  //sentopen();
  }
else if(count2==1)
{
  gateclose();
 // sentclose();
}
if(count2==3)
{
  count2=1;
}
}
