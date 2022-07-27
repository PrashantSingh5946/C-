#include<iostream.h>
#include<process.h>
#include<conio.h>
int main()
{
clrscr();
void convert(float &,char &,char);
float distance;
char choice,type='f';
cout<<"\nEntre distance in feet :";
cin>>distance;
cout<<"\nYou want distance infeets or inches ?(f/i):\n";
cin>>choice;
switch(choice)
{
case 'f':convert(distance, type, 'f');
break;
case 'i':convert(distance, type, 'i');
break;
default: cout<<"\nYou have entered a wrong value\n";
}
cout<<"\nDistance="<<distance<<""<<type<<"\n";
getche();
}
void convert(float & d,char & t,char ch)
{  switch(ch)
 { case'f': if(t=='i')
  {
   d=d/12;
   t='f';
  }
  break;
  case'i': if(t=='f')
  {
   d=d*12;
   t='i';
   }
  break;
 }
 return;
}