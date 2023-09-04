//---Simple Calculator Program
#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  float a,b;
  char op,ch;
  while(!kbhit())
  {
   cout<<" Enter operator: +, -, *, / : ";
   cin>>op;
   cout<<" Enter any two numbers :\n";
   cout<<" 1st Number: ";
   cin>>a;
   cout<<" 2nd Number: ";
   cin>>b;
   cout<<"\n";


   switch(op)
    {

     case '+':
      cout<<" ADDITION --->  "<<a<<" + "<<b<<" = "<<a+b<<"\n";
      break;

     case '-':
      cout<<" SUBSTRACTION --->  "<<a<<" - "<<b<<" = "<<a-b<<"\n";
      break;

     case '*':
      cout<<" MULTIPLICATION --->  "<<a<<" * "<<b<<" = "<<a*b<<"\n";
      break;

     case '/':
      cout<<" DIVISION --->  "<<a<<" / "<<b<<" = "<<a/b<<"\n";
      break;

     default:
      cout<<"WRONG! This is operation is not complete";
      break;

    }
   ch=getch();
   if((int)ch==92) break;
  }
 }
