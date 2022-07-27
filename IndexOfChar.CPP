//A program to find the index of a character in a string
# include<iostream.h>
# include<conio.h>
int main()
{
clrscr();
int findp(char s[],char c);
char string[80],ch;
int y=0;
cout<<"enter main string :\n";
cin.getline(string,80);
cout<<"\n enter character to be searched for:\n";
cin.get(ch);
y=findp(string,ch);
if(y==-1)
cout<<"\n sorry! character is not in the string\n";
return 0;
getche();
}
int findp(char s[],char c)
{
 int f=-1;
  for (int i=0;s[i]!='\0'; i++)
  {
  if(s[i]==c)
   { f=0;
   cout<<"\n the charecter is in the string at position"
   <<i+1;
   }
   }
   return(f);
   }