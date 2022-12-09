#include<stdio.h>
#include<conio.h>
void arrsum(int[],int);
void arrlar(int[],int);
void arrsmal(int[],int);
void arrlsrch(int[],int);
void arrrev(int[],int);
void arrfrq(int[],int);
void arrfrqn(int[],int);
void arrblsrt(int[],int);
void arrbsrch(int[],int);
void arraden(int[],int);
void arradbg(int[],int);
void arrdel_el(int[],int);
void main()
{
int a[10],n,i,arr;
char c;
printf("enter the no. of elements you are intrested in but not more than 10\n");
scanf("%d",&n);
printf("emter the %d elements now\n",n);
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
printf("you have entered the following elements in the array\n");
for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
do
{
printf("\nEnter 1 to find sum of elements of array\nEnter 2 to find the largest element in the array\nEnter 3 to find the smallest element in the array\nEnter 4 to search an element using linear search\nEnter 5 to reverse an array\nEnter 6 to find the frequency of an element\nEnter 7 to find the frequency of every element\nEnter 8 to sort the array using bubble sort\nEnter 9 to search an element in the array using binary search\nEnter 10 to insert a new element at the end of the array\nEnter 11 for inserting a new element at the beggining of the array\nEnter 12 to delete an element from the array\n");
scanf("%d",&arr);
 switch(arr)
 {
 case 1:
 arrsum(a,n);
 break;
 case 2:
 arrlar(a,n);
 break;
 case 3:
 arrsmal(a,n);
 break;
 case 4:
 arrlsrch(a,n);
 break;
 case 5:
 arrrev(a,n);
 break;
 case 6:
 arrfrq(a,n);
 break;
 case 7:
 arrfrqn(a,n);
 break;
 case 8:
 arrblsrt(a,n);
 break;
 case 9:
 arrbsrch(a,n);
 break;
 case 10:
 arraden(a,n);
 break;
 case 11:
 arradbg(a,n);
 break;
 case 12:
 arrdel_el(a,n);
 break;
 default:
printf("*****SORRY YOUR INPUT IS INVALID******");
 }
 printf("\nif you want to continue then press y otherwise press any key\n");
c=getche();
 }
while(c=='y');
getch();
}
void arrsum(int x[],int y)
{
int z=0,i;
for(i=0;i<y;i++)
{
z=z+x[i];
}
printf("sum of elements of above array =%d",z);
return;
}
void arrlar(int x[],int y)
{
int l=x[0],i;
for(i=0;i<y;i++)
{
if(x[i]>l)
{
l=x[i];
}
}
printf("The largest element is %d ",l);
return;
}
void arrsmal(int x[],int y)
{
int s=x[0],i;
for(i=0;i<y;i++)
{
if(x[i]<s)
{
s=x[i];
 }
}
printf("The smallest element is %d ",s);
return;
}
void arrlsrch(int x[],int y)
{
 int i,f,z;
 printf("Enter the elelment that you want to check whether it is present in the array\n");
scanf("%d",&z);
for(i=0;i<y;i++)
{
if(x[i]==z)
{
f=1;
break;
}
}
if(f==1)
printf("%d is present",z);
else
printf("%d is not present",z);
}
void arrrev(int x[],int y)
{
int i,temp;
printf("Array before reversing\n");
for(i=0;i<y;i++)
{
printf("x[%d] = %d ",i,x[i]);
}
// for(i=0,j=n-1;i<n/2;i++,j--)
for(i=0;i<y/2;i++)
{
temp=x[i];
x[i]=x[y-1-i];
x[y-1-i]=temp;
}
printf("\nArray after reversing\n");
for(i=0;i<y;i++)
{
printf("x[%d] = %d ",i,x[i]);
}
}
void arrfrq(int x[],int y)
{
int i,z,count=0;
printf("Enter the element whose frequency you want to find in the above array\n");
scanf("%d",&z);
for (i=0;i<y;i++)
{
if(z==x[i])
{
count++;
}
}
printf("%d is present %d times in above array\n",z,count);
}
void arrfrqn(int x[],int y)
{
int i,j,f,k,count;
for(i=0;i<y;i++)
{
f=0;
for(k=0;k<i;k++)
{
if(x[i]==x[k])
{
f=1;
break;
}
}
if(f!=1)
{
count=0;
for(j=i;j<y;j++)
{
if(x[i]==x[j])
{
count++;
}
}
printf("%d is present %d times\n",x[i],count);
 }
 }
}
void arrblsrt(int x[],int y)
{
int i,j,t;
printf("Array before sorting is given as\n");
for(i=0;i<y;i++)
{
printf("x[%d] = %d\n",i,x[i]);
}
for(i=0;i<y;i++)
{
for(j=0;j<y-1-i;j++)
{
if(x[j]>x[j+1])
{
t=x[j];
x[j]=x[j+1];
x[j+1]=t;
}
}
printf("Array after sorting is given as \n");
for(i=0;i<y;i++)
{
printf("x[%d] = %d\n",i,x[i]);
}
}
}
void arrbsrch(int x[],int y)
{
int z,f,low,high,mid;
printf("Enter the element u wanna find in the array\n");
scanf("%d",&z);
low=0;
high=y;
while(low<=high)
{
 mid=(low+high)/2;
 if(x[mid]==z)
 {
 printf("%d successfully found at %d location\n",z,mid);
f=1;
break;
 }
 else if(x[mid]>z)
{
high=mid-1;
} 
else
{
low=mid+1;
}
}
if(f==0)
{
printf("sorry elements not found\n");
}
}
void arraden(int x[],int y)
{
int i,z;
printf("Enter the new element that you want to insert at the end of array\n");
scanf("%d",&z);
for(i=0;i<y;i++)
x[y]=z;
printf("Your new array after inserting new element at the end is given as:\n");
for(i=0;i<y+1;i++)
{
printf("%d ",x[i]);
}
}
void arradbg(int x[],int y)
{
int i,z;
printf("Enter the new element that you want to insert at the beginning of array\n");
scanf("%d",&z);
y++;
for(i=y;i>1;i--)
{
x[i-1]=x[i-2];
}
x[0]=z;
printf("Your new array after inserting new element at the beginning is given as:\n");
for(i=0;i<y;i++)
{
printf("%d ",x[i]);
}
}
void arrdel_el(int x[],int y)
{
 int i,pos,j;
 
 printf("\nEnter the postion of element you want to delete :\n");
 scanf("%d",&pos);
 for(i=pos-1;i<=y-1;i++)
 {
 x[i]=x[i+1];
 }
 printf("Your new sequence of elements is :\n");
 for(i=0;i<=y-2;i++)
 {
 printf("%d ",x[i]);
 }
}