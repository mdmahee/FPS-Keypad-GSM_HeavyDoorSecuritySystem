void pass()
{ lcd.begin(16, 2);
          lcd.clear();
          
          lcd.setCursor(0, 0);
    lcd.print("  Please enter");
  lcd.setCursor(0, 1);
  lcd.print("Pass:");
          //lcd.setCursor (6, 2);
         // lcd.print("B");
          delay(1000);
        //  lcd.clear();
         // lcd.setCursor (6, 2);
          //lcd.print("*");
    while(x<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='9')
          {
          lcd.setCursor (5, 1);
          lcd.print("9");
          delay(400);
          lcd.setCursor (5, 1);
          lcd.print("*");
           // lcd.clear();
            p();
          }
            else   if(tecla =='#')
     {lcd.begin(16, 2);   
       lcd.clear();
          x=1;
     }  
else if((tecla =='0')||(tecla =='1')||(tecla =='2')||(tecla =='3')||(tecla =='5')||(tecla =='6')|| (tecla =='7')||(tecla =='8')||(tecla =='4'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");
  //lcd.setCursor(4,1);
 // lcd.print("you are not ");lcd.setCursor(4,2);
 // lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  x=1;
    if (count==3)
{
rpassw();
}
     } 
        }
}
void p()
{ 
    while(s<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='6')
          {
          lcd.setCursor (6, 1);
          lcd.print("6");
          delay(400);
          lcd.setCursor (6, 1);
          lcd.print("*");
            pe();}
     else if(tecla =='#')
     {lcd.begin(16, 2);   
       lcd.clear();
          s=1;
            //x=1;
     }  
        else   if((tecla =='1')||(tecla =='2')||(tecla =='3')||(tecla =='5')||(tecla =='4')|| (tecla =='7')||(tecla =='8')||(tecla =='9')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");
  //lcd.setCursor(4,1);
 // lcd.print("you are not ");lcd.setCursor(4,2);
//  lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  s=1;
  x=1;
    if (count==3)
{
rpassw();
}
     } ;
             
        }
}
void pe()
{ 
    while(s<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='5')
          {
          lcd.setCursor (7, 1);
          lcd.print("5");
          delay(400);
          lcd.setCursor (7, 1);
          lcd.print("*");
            paa();}
     else if(tecla =='#')
     {lcd.begin(16, 2);   
       lcd.clear();
          s=1;
            //x=1;
     }  
        else   if((tecla =='1')||(tecla =='2')||(tecla =='3')||(tecla =='6')||(tecla =='4')|| (tecla =='7')||(tecla =='8')||(tecla =='9')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");
  //lcd.setCursor(4,1);
 // lcd.print("you are not ");lcd.setCursor(4,2);
 // lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  s=1;
  x=1;
    if (count==3)
{
rpassw();
}
     } ;
             
        }
}
void paa()
{ 
    while(g<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='1')
          {
          //lcd.begin(20, 4);
          //lcd.clear();
          lcd.setCursor (8, 1);
          lcd.print("1");
          delay(400);
          lcd.setCursor (8, 1);
          lcd.print("*");
          delay(1000);
          
              lcd.setCursor (0, 1);
          lcd.print("   Accepted");
          delay(800);
          
        //  digitalWrite(buz,HIGH);
          
          lcd.clear();
  r();
lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Welcome");
  lcd.setCursor(0,1);
  lcd.print(" Door is open");
  //  lcd.setCursor(6,3);
 // lcd.print("  .....");
 //gateclose();
  count2=2;
  delay(2000); 
// sent3o();
 lcd.clear();
         welcome(); 
       g=1  ; 
        s=1;
      x=1;  
        }
           else if(tecla =='2')
     {lcd.begin(16, 2);   
       lcd.clear();
                    lcd.clear();
  r();
lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Welcome");
  lcd.setCursor(0,1);
  lcd.print(" Door is close");

// gateopen();
 count2=1;
  delay(2000); 
// sent3c();lcd.clear();
         g =1;
                 s=1;
      x=1;
     }  
         else  if((tecla =='3')||(tecla =='4')||(tecla =='5')||(tecla =='6')|| (tecla =='7')||(tecla =='8')||(tecla =='9')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");
  //lcd.setCursor(4,1);
//  lcd.print("you are not ");lcd.setCursor(4,2);
 // lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  g=1;
  s=1;
      x=1;
    if (count==3)
{
rpassw();
}
     } 
             
        }
}









void npass()
{ lcd.begin(16, 2);
          lcd.clear();
          
          lcd.setCursor(0, 0);
    lcd.print("  Please enter");
  lcd.setCursor(0, 1);
  lcd.print("Pass:");
          //lcd.setCursor (6, 2);
         // lcd.print("B");
          delay(1000);
        //  lcd.clear();
         // lcd.setCursor (6, 2);
          //lcd.print("*");
    while(x<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='9')
          {
          lcd.setCursor (5, 1);
          lcd.print("9");
          delay(400);
          lcd.setCursor (5, 1);
          lcd.print("*");
           // lcd.clear();
            np();
          }
            else   if(tecla =='#')
     {lcd.begin(16, 2);   
       lcd.clear();
          x=1;
     }  
else if((tecla =='0')||(tecla =='1')||(tecla =='2')||(tecla =='3')||(tecla =='5')||(tecla =='6')|| (tecla =='7')||(tecla =='8')||(tecla =='4'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");
  //lcd.setCursor(4,1);
 // lcd.print("you are not ");lcd.setCursor(4,2);
 // lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  x=1;
    if (count==3)
{
rpassw();
}
     } 
        }
}
void np()
{ 
    while(s<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='6')
          {
          lcd.setCursor (6, 1);
          lcd.print("6");
          delay(400);
          lcd.setCursor (6, 1);
          lcd.print("*");
            npe();}
     else if(tecla =='#')
     {lcd.begin(16, 2);   
       lcd.clear();
          s=1;
            //x=1;
     }  
        else   if((tecla =='1')||(tecla =='2')||(tecla =='3')||(tecla =='5')||(tecla =='4')|| (tecla =='7')||(tecla =='8')||(tecla =='9')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");
  //lcd.setCursor(4,1);
 // lcd.print("you are not ");lcd.setCursor(4,2);
//  lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  s=1;
  x=1;
    if (count==3)
{
rpassw();
}
     } ;
             
        }
}
void npe()
{ 
    while(s<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='5')
          {
          lcd.setCursor (7, 1);
          lcd.print("5");
          delay(400);
          lcd.setCursor (7, 1);
          lcd.print("*");
            npaa();}
     else if(tecla =='#')
     {lcd.begin(16, 2);   
       lcd.clear();
          s=1;
            //x=1;
     }  
        else   if((tecla =='1')||(tecla =='2')||(tecla =='3')||(tecla =='6')||(tecla =='4')|| (tecla =='7')||(tecla =='8')||(tecla =='9')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");
  //lcd.setCursor(4,1);
 // lcd.print("you are not ");lcd.setCursor(4,2);
 // lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  s=1;
  x=1;
    if (count==3)
{
rpassw();
}
     } ;
             
        }
}
void npaa()
{ 
    while(g<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='1')
          {
          //lcd.begin(20, 4);
          //lcd.clear();
          lcd.setCursor (8, 1);
          lcd.print("1");
          delay(400);
          lcd.setCursor (8, 1);
          lcd.print("*");
          delay(1000);
          
              lcd.setCursor (0, 1);
          lcd.print("   Accepted");
          delay(800);
          
       

 enochnge();


      //   g =1;
      //           s=1;
     // x=1;
     }  
         else  if((tecla =='2')||(tecla =='3')||(tecla =='4')||(tecla =='5')||(tecla =='6')|| (tecla =='7')||(tecla =='8')||(tecla =='9')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");
  //lcd.setCursor(4,1);
//  lcd.print("you are not ");lcd.setCursor(4,2);
 // lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  g=1;
  s=1;
      x=1;
    if (count==3)
{
rpassw();
}
     } 
             
        }
}











void paasss()
{ lcd.begin(20, 4);
          lcd.clear();
          
          lcd.setCursor(0, 0);
    lcd.print(" Please enter your");
  lcd.setCursor(4, 1);
  lcd.print(" Password :");
          lcd.setCursor (6, 2);
         // lcd.print("B");
          delay(400);
         // lcd.setCursor (6, 2);
         // lcd.print("*");
    while(x<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='9')
          {
          lcd.setCursor (7, 2);
          lcd.print("9");
          delay(400);
          lcd.setCursor (7, 2);
          lcd.print("*");
           // lcd.clear();
            psss();
          }
            else   if(tecla =='#')
     {lcd.begin(20, 4);   
       lcd.clear();
          x=1;
     }  
else if((tecla =='5')||(tecla =='6')|| (tecla =='7')||(tecla =='8')||(tecla =='1')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");lcd.setCursor(4,1);
  lcd.print("you are not ");lcd.setCursor(4,2);
  lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  x=1;
    if (count==3)
{
rpassw();
}
     } 
        }
}
void psss()
{ 
    while(s<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='6')
          {
          lcd.setCursor (8, 2);
          lcd.print("6");
          delay(400);
            lcd.setCursor (8, 2);
          lcd.print("*");
            passsdd();
          }
     else if(tecla =='#')
     {lcd.begin(20, 4);   
       lcd.clear();
          s=1;
            //x=1;
     }  
        else   if((tecla =='5')||(tecla =='3')|| (tecla =='7')||(tecla =='8')||(tecla =='9')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");lcd.setCursor(4,1);
  lcd.print("you are not ");lcd.setCursor(4,2);
  lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  s=1;
  x=1;
    if (count==3)
{
rpassw();
}
     } ;
             
        }
}

void passsdd()
{ 
    while(s<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='5')
          {
          lcd.setCursor (9, 2);
          lcd.print("5");
          delay(400);
            lcd.setCursor (9, 2);
          lcd.print("*");
            passse();}
     else if(tecla =='#')
     {lcd.begin(20, 4);   
       lcd.clear();
          s=1;
            //x=1;
     }  
        else   if((tecla =='6')||(tecla =='3')|| (tecla =='7')||(tecla =='8')||(tecla =='9')||(tecla =='0'))
     {count=count+1;
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("  Wrong Password");lcd.setCursor(4,1);
  lcd.print("you are not ");lcd.setCursor(4,2);
  lcd.print("authorized");
wr();
 lcd.setCursor(8,3);
  lcd.print(count);
  delay(1000);
  lcd.clear();
  s=1;
  x=1;
    if (count==3)
{
rpassw();
}
     } ;
             
        }
}


void passse()
{ 
    while(g<1)  
        {
        tecla=customKeypad.getKey(); //CHOOSE SENSOR 
          if(tecla =='1')
          {
          //lcd.begin(20, 4);
          //lcd.clear();
          lcd.setCursor (10, 2);
          lcd.print("1");
          delay(400);
          lcd.setCursor (10, 2);
          lcd.print("*");
          delay(1000);
          
              lcd.setCursor (5, 3);
          lcd.print("Accepted");
          delay(800);
          
         // digitalWrite(buz,HIGH);
          
          lcd.clear();
  r();
lcd.clear();
 lcd.setCursor(7,0);
  lcd.print("Welcome");
  lcd.setCursor(0,1);
  lcd.print(" you are authorized");

//Enroll();
  delay(200); 
// sent3oa();
 lcd.clear();
          
       g=1  ; 
        s=1;
      x=1;  
        }
           
             
        }
}
