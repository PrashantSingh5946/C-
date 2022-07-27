//Program to find if a given number is prime or not
#include<iostream.h>
#include<conio.h>
int prime (int);
void main()
{
clrscr();
int x;
cout<<"\n enter the no.";
cin>>x;
int p=prime(x);
if(p==0)
cout<<"\n\n the no is not prime ";
else
cout <<"\n the no is prime";
getche();
 }
 int prime (int y)
 {
 int a,b;
 for(a=2;a<y;a++)
 {
 if(y%a==0)
 b++;
 }
 if(a==2)
 return(0);
 else
 return(1);
 }