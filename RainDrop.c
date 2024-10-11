#include,stdio.h>
int main()
{
    int n,i;
    for(i==1;i<=n/2;i++)
    {
        if(n%i==0)
        {
          if(i==3)
          {
            printf("Pling");
          }

          else if(i==5)
          {
            printf("Plang");
          }

          else if(i==7)
          {
            printf("Plong");
          }

          else
          {
            printf("%d",n);
          }
        }
    }
   
    return 0;
}