#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
printf("Enter the number");
scanf("%d",&n);
for(i=n;i>0;i--)
{
for(j=n;j>i;j--)
printf("%d",j);
for(int j=i;j>0;j--)
printf("%d",i);
printf("\n");
}
getch();
}