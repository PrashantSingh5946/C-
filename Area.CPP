/*This will help user to find area of square,rectangle
 and circle depending upon user's choice*/
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 cout<<"WELCOME AGAIN \n";
 int choice,side,length,breadth,radius, Area;
 cout<<"1=Area of square \n 2=Area of rectangle \n  3=Area of circle \n";
 cout<<"enter your choice: \t";
 cin>>choice;
 if(choice==1)
 {
 cout<<"Enter the side of square: \t";
 cin>>side;
 Area=side*side;
 cout<<"\n Area of square is: \t"<<Area;
 }
 else if(choice==2)
 {
 cout<<" \n Enter the length of rectangle: \t" ;
 cin>>length;
 cout<<"\n  Enter the breadth of rectangle: \t" ;
 cin>>breadth;
 Area=length*breadth;
 cout<<" \n Area of rectangle is:"<<Area;
}
else if(choice==3)
{
cout<<"\n Enter the radius: \t";
cin>>radius;
Area=3.14*(radius*radius);
cout<<" \n Area of circle is :" <<Area;
}
else
{
cout<<" \n Invalid choice" ;
}
cout<<"\n Thank you" ;
getche();
 }