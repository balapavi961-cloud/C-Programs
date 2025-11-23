#include<stdio.h>
void main()
{
    int n=121;
    int temp=n;
    int rev=0;
    while(temp>0)
    {
        int rem=temp%10;
        rev=rev+rem*10;
        temp/=10;
    }
    printf("%d",rev);
}