#include<stdio.h>
int main()
{
int a,b;
printf("\n enter the number:");
scanf("%d %d",&a,&b);
if((a-b)%2==0)
{
printf("\nEVEN");
}
else
{
printf("\nODD");
}
return 0;
}
