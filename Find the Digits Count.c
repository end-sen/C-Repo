#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i,cnt=0;
   while(n>=9)
    {
        int r=n%10;
        cnt++;
        n = n/10;
    }
    printf("%d",cnt+1);
    return 0;
}
