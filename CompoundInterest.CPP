#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int p,r,n,ci;
cout<<"Enter the principal";
cin>>p;
cout<<"Enter the rate of interest";
cin>>r;
cout<<"Enter the time span in years";
cin>>n;
ci=p*pow((1+r/100),n);
cout<<"The Compound Interest for the year is"<<ci;
getche();
}
