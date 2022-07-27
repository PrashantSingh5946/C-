//Swapping via all three modes
#include<iostream.h>
#include<conio.h>
#include<process.h>
void swap1(int ,int);
void swap2(int&,int&);
void swap3(int,int);
void main()
{
clrscr();
int a,b,ch;
cout<<"Enter X ";
cout<<"\n";
cin>>a;
cout<<"Enter Y ";
cin>>b;
cout<<"values before swapping\n"<< "X= "<<a<<"Y= "<<b;
cout<<"Main Menu for swapping...\n";
cout<<"1.Call by value\n"<<"2.Call by refrence\n"<<"3.Without third varieble\n"<<"4.Exit\n";
cin>>ch;
switch(ch)
{
case 1 :
swap1(a,b);
     break;
case 2 :
 swap2(a,b);
      break;
case 3 :
swap3(a,b);
    break;
case 4 :goto lb;
    default :
    goto lb;
    }
getche();
lb:
}
void swap1(int x,int y)
{int z;
z=x;
x=y;
y=z;
cout<<"values after swapping "<<"X= "<<x<<"Y= "<<y;
}
void swap2(int&x,int&y)
{
int z;
z=x;
x=y;
y=z;
cout<<"values after swapping "<< "X= "<<x<<"Y= "<<y;
}
 void swap3(int x,int y)
 {
 x=x+y;
 y=x-y;
 x=x-y;
 cout<<"values after swapping"<<" "<<x<<" "<<y;
 }