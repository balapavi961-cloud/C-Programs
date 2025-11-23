#include<stdio.h>
int small(int a[],int n,int i)
{
    int min=a[i];
    if(i<=n){
        return min;
    }
    if(a[i]<min){
        min=a[i];
    }
    return small(a,n,i+1);
}
void main()
{
    int n=5;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",a[i]);
    }
    printf("%d ",small(a,n,0));
}