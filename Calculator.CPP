#include<iostream.h>
#include<conio.h>
void calculate(int a,int b,int code);
void main()
{
clrscr();
int a,b,code;
cout<<"Welcome to Calculator"<<"\n";
cout<<"1."<<"Addition"<<"\n";
cout<<"2."<<"Subtraction"<<"\n";
cout<<"3."<<"Multiplication"<<"\n";
cout<<"4."<<"Division"<<"\n";
cout<<"Enter the first value"<<"\n";
cin>>a;
cout<<"Enter the second value"<<"\n";
cin>>b;
cout<<"Entern the code"<<"\n";
cin>>code;
calculate (a,b,code);
getche();
}
void calculate (int a,int b,int code)
{
  switch(code)
  {
  case 1:cout<<"The sum is"<<a+b; break;
  case 2:cout<<"The difference is"<<a-b;break;
  case 3:cout<<"The product is"<<a*b;   break;
  case 4:cout<<"The division is"<<a/b;  break;
  default:cout<<"Wrong operator!!!!!"; break;
  }
}







