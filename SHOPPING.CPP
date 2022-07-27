#include<conio.h>
#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int qty;
float tp=0;
int n;
int sn;
int flag=0;
void gdataa();
void sedataa();
class stud
{
  char pname[100];
  int pno;
  int price;
  float dis,dprice,tprice;

  public:
  void calculate();
  void getdata();
  void showdata();
  void showdat();
  int getpno();
  int diprice();
  void costumer();
  int go();
  void modify();
  };
  void stud::calculate()
  {
  dprice=(price*qty)-((price*qty)*dis/100);
  }

 void stud::modify()
{char chi;
cout<<" What do you want to modify ? "<<"\n";
cout<<" 01. Product number "<<"\n";
cout<<" 02. Product NAME "<<"\n";
cout<<" 03. Product Price "<<"\n";
cout<<" 04. Discount "<<"\n";
cout<<" 05. Back to Administrator Main Menu "<<"\n";
cout<<" Enter your choice "<<"\n";
cin>>chi;
switch(chi)
{
case '1':
cout<<" The  existing product no. is "<<pno<<"\n";
cout<<" Enter your new product no ";
cin>>pno;
cout<<"\n"<<" Your data has been modified ";
break;
case '2':
cout<<" The  existing product name is "<<pname<<"\n";
cout<<" Enter your new product name ";
gets(pname);
cout<<"\n"<<" Your data has been modified ";
break;
case '3':
cout<<" The  existing product price is "<<price<<"\n";
cout<<" Enter your new product price is ";
cin>>price;
cout<<"\n"<<" Your data has been modified ";
break;
case '4':
cout<<" The  existing product discount is "<<dis<<"\n";
cout<<" Enter your new product discount ";
cin>>dis;
cout<<"\n"<<" Your data has been modified ";
break;
case '5':
exit(5);
break;
default :
cout<<"wrong choice ";
break;
}
calculate();
}



void stud::getdata()
{
cout<<"\n\n\n\n\t\tProduct record.\n\n";
cout<<"\tEnter your product name:";
gets(pname);
cout<<"\n\tEnter product no ";
cin>>pno;
cout<<"\n\tEnter product price ";
cin>>price;
cout<<"\n\tEnter product discount ";
cin>>dis;
cout<<"\n";
calculate();
}
void stud::showdata()
{calculate();
cout<<"\nProduct Name|";
cout<<"  Product no|";
cout<<"  Quantity|";
cout<<"  Price|";
cout<<"  Discount|";
cout<<"\n"<<pname<<"\t\t"<<pno<<"\t\t"<<qty<<"\t"<<price<<"\t   "<<dis;
}
//////////////////////
int stud::getpno()
{
return pno;
}
int stud::diprice()
{
return dprice;
}
//prototype definition
void gdata();
void sdata();
void sedata();
void sedata(int);
void ddata();
void introa();
void mdata();
void sodata();
void sedata(int);
void costumer();
void administrator();
void wlcm();
void inpu();
void sedat();
void top();
void main();
/////////////////////////
void gdata()
{stud s1;
s1.getdata();
ofstream outfile;
outfile.open("pro.dat",ios::app|ios::binary);
outfile.write((char *)&s1,sizeof(stud));
outfile.close();
cout<<"\n\n\t\tPRODUCT CREATED SUCCESSFULLY";
getche();
}


void sdata()
{stud s1;
ifstream fin;
fin.open("pro.dat",ios::binary);
while(fin.read((char*)&s1,sizeof(stud)))
{
s1.showdata();
cout<<"\n\t===========================================================\n";
}
fin.close();
getche();
}
//////////////////

void sedata()
{
stud s1;
ifstream fin;
int rn,found='n';
fin.open("pro.dat",ios::binary);
cout<<"\n\n\tEnter PRODUCT no. to be searched\n\t\t\t";
cin>>rn;
while(fin.read((char*)&s1,sizeof(stud)))
{
if(s1.getpno()==rn)
{
s1.showdata();
found='y';
break;
}
}
if(found=='n')
cout<<"\nPRODUCT donot exists\n";
fin.close();
getche();
}


/////////////////////
void ddata()
{
int n;
cout<<"\n\n\tEnter PRODUCT no to be deleted......";
cin>>n;
ifstream ifile;
ifile.open("pro.dat",ios::binary);
ofstream ofile;
ofile.open("tp2.dat",ios::app|ios::binary);
stud s1;
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getpno()!=n)
{
ofile.write((char*)&s1,sizeof(s1));
}
else
{
cout<<"The PRODUCT has been deleted ";
getche();
}
}
ifile.close();
ofile.close();
remove("pro.dat") ;
rename("tp2.dat","pro.dat");
}

void mdata()
{int n;
cout<<"\n\n\tEnter PRODUCT no to be modified......";
cin>>n;
ifstream ifile;
ifile.open("pro.dat",ios::binary);
ofstream ofile;
ofile.open("tp2.dat",ios::app|ios::binary);
stud s1;
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getpno()==n)
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
remove("pro.dat") ;
rename("tp2.dat","pro.dat");

}

///////////////////////////////sorting///////////////
void sodata()
{
int a;
stud s1;
ifstream ifile;
ofstream ofile;
ifile.open("pro.dat",ios::binary);
ofile.open("tmp12.dat",ios::binary|ios::app);
ifile.seekg(0|ios::beg);
ifile.read((char*)&s1,sizeof(s1));
a=s1.getpno();
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(a<s1.getpno())
{
a=s1.getpno();
}
}
cout<<"\n\n\n\n\t\t";
cout<<a<<"\n";
ifile.close();
for(int i=1;i<=a;i++)
{
ifile.open("pro.dat",ios::binary);
ifile.seekg(0|ios::beg);
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getpno()==i)
{
ofile.write((char *)&s1,sizeof(s1));
}
}
ifile.close();
}
ofile.close();
cout<<"\t\t PRODUCT Data sorted ";
remove("pro.dat");
rename("tmp12.dat","pro.dat");
getche();
}





//////////////////////////////////////login///////////////////////////////////////


class login
{ public:
  char name[100];
  char uname[100];
  char pass[100];
  void getdataa();
  void searchdataa();
  };

////////////////////


void login::getdataa()
{ int p;
cout<<"\n\n\n\n\t\tSIGN UP.\n\n";
cout<<"\n\n\tEnter admin password....... ";
cin>>p;
if(p==1011)
{cout<<"\n\tEnter your name:";
gets(uname);
cout<<"\n\tEnter your id:";
gets(name);
cout<<"\n\tEnter passwod ";
gets(pass);
}
else cout<<"\tWrong Password!!!!!!!!!";
}

///////////////////////


void gdataa()
{login s1;
s1.getdataa();
ofstream outfile;
outfile.open("ll1.dat",ios::app|ios::binary);
outfile.write((char *)&s1,sizeof(login));
outfile.close();
cout<<"\n\n\t\tSigned up successfully";
getche();
}
void sedataa()
{
login s1;
ifstream fin;
char un[100],rn[100],ps[100],found='n';
fin.open("ll1.dat",ios::binary);
cout<<"\n\n\tEnter user id to be login\n\t\t\t";
gets(rn);
while(fin.read((char*)&s1,sizeof(login)))
{
if(strcmp(rn,s1.name)==0)
{ lb:
strcpy(un,s1.uname);
cout<<"\n\n\tEnter password:::";
gets(ps);
if(strcmp(ps,s1.pass)==0)
{
clrscr();
cout<<"\n\tWELCOME\n";
cout<<"\n\tUSERNAME:-";
puts(un);    char ch;
do                            //DO STARTS
{

cout<<"\n\n\t\t********************************************\n";
cout<<"\t\t\tADMINISTRATOR MENU FUNCTION\n";
cout<<"\t\t********************************************\n";
cout<<"\n\n\t\t\t\tADMIN MENU";
cout<<"\n\n\t\t\t01.CREATE NEW PRODUCT DETAIL";
cout<<"\n\n\t\t\t02.DISPLAY ALL PRODUCTS DETAIL";
cout<<"\n\n\t\t\t03.DISPLAY SPECIFIC PRODUCT.";
cout<<"\n\n\t\t\t04.DELETE PRODUCT.";
cout<<"\n\n\t\t\t05.MODIFY PRODUCT.";
cout<<"\n\n\t\t\t06.PRODUCT SORTING.";
cout<<"\n\n\t\t\t07.Back to Main Menu.";
cout<<"\n\n\t\t\t08.EXIT.";
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
case '7': main();
break;
case '8':
exit(8);
break;
default: cout<<"\a";
break;
}                                         //SWITCH COLSED
}while(ch>='1' && ch<='7');
}
else
{
cout<<"\n\n\n\n\n\t\t\t\tWrong password..........";
goto lb;
}
found='y';
break;
}
}
if(found=='n')
cout<<"\nNEW USER!!!!!!!\n";
fin.close();
getche();
}

////////////////

void introa()
{       cout<<"\n\n\n\t***************************************************************";
	cout<<"\n**==**\t\t  CUSTMOR";
	cout<<"\n**==**\n**==**\t\tPRODUCT MENU";
	cout<<"\n**==**\n**==**\t\tSIGN IN for administrator main menu....";
	cout<<"\n**==**\n**==**\n\t***************************************************************";
	getch();
}

//////////////////////////////////////////////////////////////////////innvoice
void stud::showdat()
{
calculate();
cout<<"\nProduct Name|";
cout<<"  Product no|";
cout<<"  Quantity|";
cout<<"  Price|";
cout<<"  Discount|";
cout<<"  Total price|";
cout<<"\n"<<pname<<"\t\t"<<pno<<"\t\t"<<qty<<"\t"<<price<<"\t   "<<dis<<"\t    "<<dprice;
cout<<"\n\t===========================================================\n";

}

//////////////

void sedat()
{stud s1;
int d;
cout<<"\n\t\t===================================================\n";
cout<<"\n\t\t\t\tINNVOICE\n";
cout<<"\n\t\t===================================================";
ofstream ofile;
ofile.open("top2.dat",ios::app|ios::binary);
ifstream fin;
fin.open("cust1.dat",ios::binary);
while(fin.read((char*)&s1,sizeof(stud)))
{
s1.showdat();
}
cout<<"\n\tTOTAL:-QUANTITY :- "<<flag<<", PRICE :- "<<tp;
cout<<"\n\n\t\tTHANK YOU!!!!!";
fin.close();
remove("cust1.dat") ;
rename("top2.dat","cust1.dat");
getche();
main();
}
///////////////
void sedata(int rn)
{
stud s1;
ifstream fin;
int found='n';
ofstream out;
out.open("cust1.dat",ios::binary|ios::app);
fin.open("pro.dat",ios::binary);
while(fin.read((char*)&s1,sizeof(s1)))
{
if(s1.getpno()==rn)
{
out.write((char*)&s1,sizeof(s1));
found='y';
tp=tp+s1.diprice();
break;
}
}
if(found=='n')
cout<<"\nPRODUCT donot exists\n";
fin.close();
getche();
}


//////////////////////////////////

void stud::costumer()
{ ofstream out;
  out.open("qty1.dat",ios::binary|ios::app);
  cout<<"\n  ENTER PRODUCT NUMBER :-";
  cin>>n;
  cout<<"\n  ENTER PRODUCT QUANTITY :-";
  cin>>qty;
  out.write((char*)&qty,sizeof(qty));
  flag=flag+qty;
  sedata(n);

}
////////////////
void inpu()
{
char ci;
stud s1;
  cout<<"\n        \t\t==================================";
  cout<<"\n\n        \t\t         PLACE YOUR ORDER";
  cout<<"\n\n        \t\t==================================";
  cout<<"\n ENTER CUSTOMER NUMBER :-";
  cin>>sn;

do
  {
s1.costumer();
/*
ofstream outfile;
outfile.open("cust.dat",ios::out|ios::binary);
outfile.write((char *)&s1,sizeof(s1));
outfile.close();
*/
cout<<"\n  DO YOU WANT TO PLACE ANY OTHER ORDER(Y/N):-";
  cin>>ci;
  }while (ci=='y'||ci=='Y') ;
clrscr();
sedat();
}

/////////////////////////////////////////////////////////////////////////////////

void administrator()
{    char cha;
introa();
do                            //DO STARTS
{
clrscr();
cout<<"\n\n\tUSER MENU";
cout<<"\n\n\t01.SIGN UP";
cout<<"\n\n\t02.SIGN IN";
cout<<"\n\n\t03.Back to MAIN MENU.";
cout<<"\n\n\t04.EXIT.";
cout<<"\n\n\t\tEnter your choice\t";
cin>>cha;
clrscr();
switch(cha)                               //SWITCH STARTS
{
case '1': gdataa();
break;
case '2': sedataa();
break;
case '3': main();
break;
case '4':
exit(4);
break;
default: cout<<"\a";
break;
}                                         //SWITCH COLSED
}while(cha>='1' && cha<='4');

}

///////////////////////////////////////////////

void wlcm()
{
cout<<"\n\t\t\tSHOPPING MALL BILLING SYSTEM" ;
cout<<"\n\n\n\n\n\t\t\t******************************";
cout<<"\n\n\t\t\t\tSHOPPING MALL ";
cout<<"\n\n\t\t\t\tBILLING SYSTEM";
cout<<"\n\n\t\t\t******************************";
getche();
clrscr();
}

/////////////////////////////////////

void main()
{clrscr();
wlcm();
cout<<"\n\t\t\tSHOPPING MALL BILLING SYSTEM" ;
cout<<"\n\n\n\n";
int num;
cout<<"\n\n\tMAIN MENU\n\n";
cout<<"\t01.CUSTOMER\n\n";
cout<<"\t02.ADMINISTRATOR\n\n";
cout<<"\t03.Back to First Page.\n\n";
cout<<"\t04.EXIT\n\n";
cout<<"\tPlease Select Your Option <1-4>    ";
cin>>num;
cout<<"\n\n\tThe Option Selected is  "<<num<<".....";
clrscr();
switch(num)
{case 1:inpu();
break;
case 2:administrator();
break;
case 3:main();
break;
case 4:
exit(4);
break;
}
getche();
}
