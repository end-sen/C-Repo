#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int i;
    for(i=a;i<=b;i++)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
    }
    return 0;
}