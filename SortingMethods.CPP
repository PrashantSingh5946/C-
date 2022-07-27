#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void lsearch();
void bsearch();
void insert();
void delet();
void traverse();
void select_sort();
void bubble_sort();
void insertion_sort();
void insert_item(int arr[],int &size,int item);
void delete_item(int arr[],int &size,int item);
void main()
{
clrscr();
char ch;
do
{
clrscr();
cout<<" MENU "<<"\n";
cout<<" 1.Linear Search "<<"\n";
cout<<" 2.Binary Search "<<"\n";
cout<<" 3.Insertion "<<"\n";
cout<<" 4.Deletion "<<"\n";
cout<<" 5.Traverse "<<"\n";
cout<<" 6.Selection sorting "<<"\n";
cout<<" 7.Bubble sorting "<<"\n";
cout<<" 8.Exit "<<"\n";
cout<<" 9.Insertion sorting \n";
cout<<" Enter your choice ";
cin>>ch;
switch(ch)
{
case '1':
lsearch();
break;
case '2':
bsearch();
break;
case '3':
insert();
break;
case '4':
delet();
break;
case '5':
traverse();
break;
case '6':
select_sort();
break;
case '7':
bubble_sort();
break;
case '8':
exit(8);
break;
case '9':
insertion_sort();
default:
cout<<" Wrong choice ";
break;
}
}while(ch>='1' && ch<='9');
getche();
}
void lsearch()
{
clrscr();
int a[20];
int b;
char c;
for(int i=0;i<19;i++)
{
cout<<" Enter the array elements ";
cout<<"\n";
cin>>a[i];
cout<<" whether you want to enter more elements (y/n) ";
cin>>c;
if(c=='n')
{
break;
}
if(c=='y')
{
continue ;
}
}
cout<<" The array elements are ";
for(int k=0;k<=i;k++)
{
cout<<a[k]<<"\t";
}
cout<<"\n";
cout<<" Enter the element to be searched for ";
cin>>b;
for(int j=0;j<=i;j++)
{
if(a[j]==b)
{
cout<<" The element has been found and is at "<<j+1<<" position ";
break ;
}
}
getche();
}
void bsearch()
{
clrscr();
int n;
cout<<" Enter the no. of array elements ";
cin>>n;
int a[20];
int b;
char c;
int first=0;
int middle;
for(int i=0;i<=n-1;i++)
{
cout<<" Enter the array elements in ascending order ";
cout<<"\n";
cin>>a[i];
if(i<n-1)
{
cout<<" whether you want to enter more elements (y/n) ";
cin>>c;
if(c=='n')
{
break;
}
if(c=='y')
{
continue ;
}
}
}
int last=i;
if(last==first)
{
cout<<" The element has been found and is at 1 position ";
}
cout<<" The array elements are ";
if(i==n)
{
for(int k=0;k<i;k++)
{
cout<<a[k]<<"\t";
}
}
else
{
for(int k=0;k<=i;k++)
{
cout<<a[k]<<"\t";
}
}
cout<<"\n";
cout<<" Enter the element to be searched for ";
cin>>b;
for(int j=0;first<=last-1;j++)
{
middle=(first+last)/2;
if(b>a[middle])
{
first=middle;
}
else
{
last=middle;
}
if(b==a[middle])
{
cout<<" The element has been found and is at "<<middle+1<<" position ";
break ;
}
}
getche();
}
void insert()
{
clrscr();
int n;
int itm;
cout<<" Enter the no. of array elements ";
cin>>n;
int ar[10];
char c;
for(int i=0;i<=n-1;i++)
{
cout<<" Enter the array elements in ascending order ";
cout<<"\n";
cin>>ar[i];
if(i<n-1)
{
cout<<" whether you want to enter more elements (y/n) ";
cin>>c;
if(c=='n')
{
break;
}
if(c=='y')
{
continue ;
}
}
}
cout<<" The array elements before insertion are ";
if(i==n)
 {
for(int k=0;k<i;k++)
{
cout<<ar[k]<<"\t";
}
}
else
{
for(int k=0;k<=i;k++)
{
cout<<ar[k]<<"\t";
}
}
cout<<"\n";
cout<<" Enter the item to be inserted ";
cin>>itm;
if(i==n)
{
insert_item(ar,i,itm);
}
else
{
i++;
insert_item(ar,i,itm);
}
cout<<" The array elements after insertion are ";
for(int l=0;l<i;l++)
{
cout<<ar[l]<<"\t";
}
getche();
}
void insert_item(int arr[],int &size,int item)
{
int i=size-1;
while(i>=0 && arr[i]>item)
{
arr[i+1]=arr[i];
i--;
}
arr[i+1]=item;
size++;
}
void delet()
{
clrscr();
int n;
int itm;
cout<<" Enter the no. of array elements ";
cin>>n;
int ar[10];
char c;
for(int i=0;i<=n-1;i++)
{
cout<<" Enter the array elements in ascending order ";
cout<<"\n";
cin>>ar[i];
if(i<n-1)
{
cout<<" whether you want to enter more elements (y/n) ";
cin>>c;
if(c=='n')
{
break;
}
if(c=='y')
{
continue ;
}
}
}
cout<<" The array elements before deletion are ";
if(i==n)
 {
for(int k=0;k<i;k++)
{
cout<<ar[k]<<"\t";
}
}
else
{
for(int k=0;k<=i;k++)
{
cout<<ar[k]<<"\t";
}
}
cout<<"\n";
cout<<" Enter the item to be deleted ";
cin>>itm;
if(i==n)
{
delete_item(ar,i,itm);
}
else
{
i++;
delete_item(ar,i,itm);
}
cout<<" The array elements after deletion are ";
for(int l=0;l<i;l++)
{
cout<<ar[l]<<"\t";
}
getche();
}
void delete_item(int arr[],int &size,int item)
{
int i=0,flag=0;
while(i<size)
{
if(arr[i]==item)
{
size--;
goto start;
}
else
{
flag=-1;
}
i++;
}
if(flag==-1)
{
cout<<" The item does not exist in the array \n";
}
start:
for(int j=i;j<size;j++)
{
arr[i]=arr[i+1];
}
}
void traverse()
{
clrscr();
int n;
cout<<" Enter the no. of array elements ";
cin>>n;
int ar[10];
char c;
for(int i=0;i<=n-1;i++)
{
cout<<" Enter the array elements in ascending order ";
cout<<"\n";
cin>>ar[i];
if(i<n-1)
{
cout<<" whether you want to enter more elements (y/n) ";
cin>>c;
if(c=='n')
{
break;
}
if(c=='y')
{
continue ;
}
}
}
cout<<" The array elements are ";
if(i==n)
 {
for(int k=0;k<i;k++)
{
cout<<ar[k]<<"\t";
}
}
else
{
for(int k=0;k<=i;k++)
{
cout<<ar[k]<<"\t";
}
}
int sum=0;
cout<<"\n";
cout<<" Sum of the array elements is ";
if(i==n)
 {
for(int l=0;l<i;l++)
{
sum=sum+ar[l];
}
}
else
{
for(int l=0;l<=i;l++)
{
sum=sum+ar[l];
}
}
cout<<sum;
getche();
}
void select_sort()
{
clrscr();
int n;
cout<<" Enter the no. of array elements ";
cin>>n;
int ar[10];
char c;
for(int i=0;i<=n-1;i++)
{
cout<<" Enter the array elements ";
cout<<"\n";
cin>>ar[i];
if(i<n-1)
{
cout<<" whether you want to enter more elements (y/n) ";
cin>>c;
if(c=='n')
{
break;
}
if(c=='y')
{
continue ;
}
}
}
cout<<" The array elements before sorting are ";
if(i==n)
 {
for(int k=0;k<i;k++)
{
cout<<ar[k]<<"\t";
}
}
else
{
for(int k=0;k<=i;k++)
{
cout<<ar[k]<<"\t";
}
}
cout<<"\n";
int p,q,small,pos;
if(n==1)
{
cout<<" The array after sorting is ";
for(int k=0;k<i;k++)
{
cout<<ar[k]<<"\t";
}
}
if((i==n)&&(n!=1))
{
for(p=0;p<=i;p++)
{
small=ar[p];
pos=p;
for(q=p+1;q<=i+1;q++)
{
if(ar[q]<small)
{
small=ar[q];
pos=q;
}
}
ar[pos]=ar[p];
ar[p]=small;
}
cout<<"\n The array after sorting is ";
for(int k=0;k<i;k++)
{
cout<<ar[k]<<"\t";
}
}
if(i<n)
{
for(p=0;p<i;p++)
{
small=ar[p];
pos=p;
for(q=p+1;q<=i;q++)
{
if(ar[q]<small)
{
small=ar[q];
pos=q;
}
}
ar[pos]=ar[p];
ar[p]=small;
}
cout<<" The array after sorting is ";
for(int k=0;k<=i;k++)
{
cout<<ar[k]<<"\t";
}
}
getche();
}

void bubble_sort()
{
clrscr();
int n;
cout<<" Enter the no. of array elements ";
cin>>n;
int ar[10];
char c;
for(int i=0;i<=n-1;i++)
{
cout<<" Enter the array elements ";
cout<<"\n";
cin>>ar[i];
if(i<n-1)
{
cout<<" whether you want to enter more elements (y/n) ";
cin>>c;
if(c=='n')
{
break;
}
if(c=='y')
{
continue ;
}
}
}
cout<<"\n";
cout<<" The array elements before sorting are ";
if(i==n)
 {
for(int k=0;k<i;k++)
{
cout<<ar[k]<<"\t";
}
}
else
{
for(int k=0;k<=i;k++)
{
cout<<ar[k]<<"\t";
}
}
if(n==1)
{
cout<<" The array after sorting is ";
for(int k=0;k<i;k++)
{
cout<<ar[k]<<" \t";
}
}
int p,q;
if((i==n)&&(n!=1))
{
for(p=0;p<=i;p++)
{
for(q=0;q<i-p;q++)
{
if(ar[q]>ar[q+1])
{
int store;
store=ar[q+1];
ar[q+1]=ar[q];
ar[q]=store;
}
}
}
cout<<"\n";
cout<<" The array after sorting is ";
for(int k=0;k<i;k++)
{
cout<<ar[k]<<"\t";
}
}
if(i<n)
{
for(p=0;p<i;p++)
{
for(q=0;q<=i-p;q++)
{
if(ar[q]>ar[q+1])
{
int store;
store=ar[q+1];
ar[q+1]=ar[q];
ar[q]=store;
}
}
}
cout<<" The array after sorting is ";
for(int k=0;k<=i;k++)
{
cout<<ar[k]<<"\t";
}
}
getche();
}


void insertion_sort()
{
int z,c;
int ar[19];
cout<<" \nEnter the number of element of array u want to enter:";
cin>>z;
cout<<"\n";
for(int x=0;x<z;x++)
{
cout<<"\nEnter ur element "<<x+1<<" of array :";
cin>>ar[x];
}
for(c=0;c<z;c++)
{
cout<<"\nUr element "<<c+1<<" of array is:";
cout<<ar[c];
}
int j,temp;
for(int a=0;a<c+1;a++)
{
j=a;
 while(j>0&&ar[j]<ar[j-1])
 {temp=ar[j];
 ar[j]=ar[j-1];
 ar[j-1]=temp;
 j--;
 }
}
cout<<"\n\n The array after sorting is ";
for(int k=0;k<c;k++)
{
cout<<ar[k]<<"\t";
}
getche();
}







