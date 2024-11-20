#include<stdio.h>
int main()
{
    int n,l,f;
    scanf("%d",&n);
    l = n%10;
    while(n>9)
    {
      n = n/10;
    }
    f=n;
    printf("%d",l+f);
    return 0;
}