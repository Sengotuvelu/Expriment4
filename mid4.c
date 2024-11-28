#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements in the array:\n",size);
    for(i=0;i<size;i++)
    {
        printf("element%d:",i);
        scanf("%d",&arr[i]);
    }
    int fs=9999,ss=9999;
    for(i=0;i<size;i++)
    {
        if(arr[i]<fs)
        {
            ss=fs;
            fs=arr[i];
        }
        else if(arr[i]<ss&&arr[i]!=fs)
        {
            ss=arr[i];
        }
    }
    if(ss==9999)
    {
        printf("No second smallest element found\n");
    }
    else
    {
        printf("The second smallest element in an array is:%d",ss);
    }
}