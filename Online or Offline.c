#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(0.9*n<m)
    {
        printf("ONLINE");
    }
    else if(0.9*n>m)
    {
        printf("DINING");
    }
    else{
        printf("EITHER");
    }
    return 0;
}