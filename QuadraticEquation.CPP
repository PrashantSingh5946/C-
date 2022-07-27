//this program is about how to find square roots of a quadratic equation
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,x,b,c,root1,root2,delta;
cout<<"Enter a b c of" <<"\t";
cout<<ax^2+bx+c:;
cin>>a>>b>>c;
if(a!)
{cout<<"a should not equal to 0";
}
delta=b*b-4ac;
else if(delta>0)
{cout<<"roots are positive and unequal";
root1=-b+delta/2*a;
cout<<"root1:" <<root1;
root2=-b-delta/2*a;
cout<<"root2;"<<root2;
}
else if (delta==0)
{
cout<<"roots are are positive and equal";
root1=-b/2*a;
cout<<"root1:"<<root1;
root2=-b/2*a;
cout<<"root2;"<<root2;
}
else
{
cout<<"roots are imaginary";
}
getche();
}