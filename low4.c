#include<stdio.h>
void main()
{
int arr[]={1,3,4,2,5,6,9,8};
int n=9;
int sum=0,tot;
tot=n*(n+1)/2;
for(int i=0;i<8;i++)
{
sum+=arr[i];
}
printf("the missing number is:%d\n",tot-sum);
}
