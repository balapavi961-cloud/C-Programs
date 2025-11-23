#include<stdio.h>
void main()
{
    int line[50];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&line[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(line[j]>line[j+1])
        {
            int temp=line[j];
            line[j]=line[j+1];
            line[j+1]=temp;
        }
    }
}
    for(i=0;i<n;i++)
    {
        printf("%d ",line[i]);
    }
}