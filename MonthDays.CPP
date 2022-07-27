// Program to tell the number of days in a specified month
#include<iostream.h>
#include<conio.h>
void display_day(int m);
void main()
{
 clrscr();
 int num;
 cout<<"Enter any number between 1 & 12 "<<"\n";
 cin>>num;
 display_day(num);
getche();
}
 void display_day
 (int m)
  {
   switch(m)
    {
     case 1:
     cout<<"31";
     break;
     case 2:
     cout<<"28";
     break;
     case 3:
     cout<<"31";
     break;
       case 4:
     cout<<"30";
     break;
     case 5:
     cout<<"31";
     break;
     case 6:
     cout<<"30";
     break;
      case 7:
     cout<<"31";
     break;
      case 8:
     cout<<"30";
     break;
      case 9:
     cout<<"31";
     break;
      case 10:
     cout<<"30";
     break;
      case 11:
     cout<<"31";
     break;
      case 12:
     cout<<"30";
     break;
     default :cout<<"Wrong entry";
     }
}