//Program to find the sum of odd and even numbers between 0 and n

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 int sum=0,sum_1,sum1;
 cout<<"Enter any variable"<<"\n";
 cin>>n;
 for(int i=1;i<=n;i++)
  {
  if(i%2==0)
   {
   sum=sum+i;
   }
  }
  cout<<"Sum of even numbers between n and 0 is "<<"\n";
  cout<<sum;
  for(int j=1;i<=n;++i)
  {
   if(n%2==1)
   {
    sum_1=sum_1+j;
   }
   cout<<"Sum of odd integers between n and 0 is ";
   cout<<sum_1;
  }
getche();
}