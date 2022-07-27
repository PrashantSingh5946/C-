#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

//Student marks management system
class stud
{
  char name[100];
  int rollno;
  int m,p,c,e,cs;
  int per;
  void calculate()
  { per=(m+p+c+e+cs)*0.2;}
  char grade;
  void calgrade()
  {
 if(per>=90 && per<=100)
 {
 grade='A';
 }
 if(per>=70 && per<90)
 {
 grade='B';
 }
 if(per>=50 && per<70)
 {
 grade='C';
 }
 if(per<50)
 {
 grade='D';
 }
}
  public:
  void getdata();
  void showdata();
  int getrollno();
  void modify();
  };
void stud::modify()
{char chi;
cout<<" What do you want to modify ? "<<"\n";
cout<<" 01. Roll number "<<"\n";
cout<<" 02. NAME "<<"\n";
cout<<" 03. Marks in maths "<<"\n";
cout<<" 04. Marks in cs "<<"\n";
cout<<" 05. Marks in physics "<<"\n";
cout<<" 06. Marks in english "<<"\n";
cout<<" 07. Marks in chemistry "<<"\n";
cout<<" Enter your choice "<<"\n";
cin>>chi;
switch(chi)
{
case '1':
cout<<" The  existing roll no. is "<<rollno<<"\n";
cout<<" Enter your new roll no ";
cin>>rollno;
cout<<"\n"<<" Your data has been modified ";
break;
case '2':
cout<<" The  existing name is "<<name<<"\n";
cout<<" Enter your new name ";
gets(name);
cout<<"\n"<<" Your data has been modified ";
break;
case '3':
cout<<" The  existing marks in maths is "<<m<<"\n";
cout<<" Enter your new marks in maths ";
cin>>m;
cout<<"\n"<<" Your data has been modified ";
break;
case '4':
cout<<" The  existing marks in cs is "<<cs<<"\n";
cout<<" Enter your new marks in cs ";
cin>>cs;
cout<<"\n"<<" Your data has been modified ";
break;
case '5':
cout<<" The  existing marks in physics is "<<p<<"\n";
cout<<" Enter your new marks in physics ";
cin>>p;
cout<<"\n"<<" Your data has been modified ";
break;
case '6':
cout<<" The  existing marks in english is "<<e<<"\n";
cout<<" Enter your new marks in english ";
cin>>e;
cout<<"\n"<<" Your data has been modified ";
break;
case '7':
cout<<" The  existing marks in chemistry is "<<c<<"\n";
cout<<" Enter your new marks in chemistry ";
cin>>c;
cout<<"\n"<<" Your data has been modified ";
break;
default :
cout<<"wrong choice ";
break;
}
calculate();
calgrade();
}



void stud::getdata()
{
cout<<"\n\n\n\n\t\tStudent record.\n\n";
cout<<"\tEnter your name:";
gets(name);
cout<<"\n\tEnter rollno ";
cin>>rollno;
cout<<"\n\tEnter marks in cs ";
cin>>cs;
cout<<"\n\tEnter marks in physics ";
cin>>p;
cout<<"\n\tEnter marks in maths ";
cin>>m;
cout<<"\n\tEnter marks in english ";
cin>>e;
cout<<"\n\tEnter marks in chemistry::" ;
cin>>c;
cout<<"\n";
calculate();
calgrade();
}
void stud::showdata()
{
cout<<"\n\tName is "<<name;
cout<<"\n\tRoll no= "<<rollno;
cout<<"\n\tMarks in 5 subjects are: "<<m<<"\t"<<cs<<"\t"<<p<<"\t"<<e<<"\t"<<c;
cout<<"\n\tpercentage is "<<per;
cout<<"\n\tGrade is "<<grade;
//cout<<"==============================================================";
}
int stud::getrollno()
{
return rollno;
}
//prototype definition
void gdata();
void sdata();
void sedata();
void ddata();
void intro();
void mdata();
 void sodata();
//closed
void main()
{
char ch;
intro();
do                            //DO STARTS
{
clrscr();
cout<<"\n\n\tMAIN MENU";
cout<<"\n\n\t01.ENTER DETAIL";
cout<<"\n\n\t02.DISPLAY DETAIL";
cout<<"\n\n\t03.SEARCH ROLL NO.";
cout<<"\n\n\t04.DELETE ROLL NO.";
cout<<"\n\n\t05.MODIFY.";
cout<<"\n\n\t06.SORTING.";
cout<<"\n\n\t07.EXIT.";
cout<<"\n\n\t\tEnter your choice\t";
cin>>ch;
clrscr();
switch(ch)                               //SWITCH STARTS
{
case '1': gdata();
break;
case '2': sdata();
break;
case '3': sedata();
break;
case '4': ddata();
break;
case '5': mdata();
break;
case '6' : sodata();
break;
case '7':
exit(7);
break;
default: cout<<"\a";
break;
}                                         //SWITCH COLSED
}while(ch>='1' && ch<='7');


}

void gdata()
{stud s1;
s1.getdata();
ofstream outfile;
outfile.open("stud1.dat",ios::app|ios::binary);
outfile.write((char *)&s1,sizeof(stud));
outfile.close();
cout<<"\n\n\t\tRecord inserted successfully";
getche();
}


void sdata()
{stud s1;
ifstream fin;
fin.open("stud1.dat",ios::binary);
while(fin.read((char*)&s1,sizeof(stud)))
{
s1.showdata();
cout<<"\n\t===========================================================\n";
}
fin.close();
getche();
}

void sedata()
{
stud s1;
ifstream fin;
int rn,found='n';
fin.open("stud1.dat",ios::binary);
cout<<"\n\n\tEnter roll no. to be searched\n\t\t\t";
cin>>rn;
while(fin.read((char*)&s1,sizeof(stud)))
{
if(s1.getrollno()==rn)
{
s1.showdata();
found='y';
break;
}
}
if(found=='n')
cout<<"\nrecord donot exists\n";
fin.close();
getche();
}

void ddata()
{
int n;
cout<<"\n\n\tEnter roll no to be deleted......";
cin>>n;
ifstream ifile;
ifile.open("stud1.dat",ios::binary);
ofstream ofile;
ofile.open("temp2.dat",ios::app|ios::binary);
stud s1;
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getrollno()!=n)
{
ofile.write((char*)&s1,sizeof(s1));
}
else
{
cout<<"The record has been deleted ";
getche();
}
}
ifile.close();
ofile.close();
remove("stud1.dat") ;
rename("temp2.dat","stud1.dat");
}
	void intro()
{
	cout<<"\n\n\n\t\t  STUDENT";
	cout<<"\n\n\t\tREPORT CARD";
	cout<<"\n\n\tPress enter for main menu....";
	getch();
}


void mdata()
{int n;
cout<<"\n\n\tEnter roll no to be modified......";
cin>>n;
ifstream ifile;
ifile.open("stud1.dat",ios::binary);
ofstream ofile;
ofile.open("temp2.dat",ios::app|ios::binary);
stud s1;
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getrollno()==n)
{ s1.modify();
ofile.write((char*)&s1,sizeof(s1));
}
else
{
ofile.write((char*)&s1,sizeof(s1));
}
}
ifile.close();
ofile.close();
remove("stud1.dat") ;
rename("temp2.dat","stud1.dat");

}

///////////////////////////////sorting///////////////
void sodata()
{
int a;
stud s1;
ifstream ifile;
ofstream ofile;
ifile.open("stud1.dat",ios::binary);
ofile.open("temp2.dat",ios::binary|ios::app);
ifile.seekg(0|ios::beg);
ifile.read((char*)&s1,sizeof(s1));
a=s1.getrollno();
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(a<s1.getrollno())
{
a=s1.getrollno();
}
}
cout<<"\n\n\n\n\t\t";
cout<<a<<"\n";
ifile.close();
for(int i=1;i<=a;i++)
{
ifile.open("stud1.dat",ios::binary);
ifile.seekg(0|ios::beg);
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getrollno()==i)
{
ofile.write((char *)&s1,sizeof(s1));
}
}
ifile.close();
}
ofile.close();
cout<<"\t\t Data sorted ";
remove("stud1.dat");
rename("temp2.dat","stud1.dat");
getche();
}





