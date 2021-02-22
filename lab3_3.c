#include <stdio.h>
int main()
{
    int k,i=2,n=0;
    scanf("%d",&k);
    while(k!=1)
    {
        if(k%i==0)
        {
            while(k%i==0)
            {
            printf("%d\n",i);
            k=k/i;
            }
        }
        i++;
    }
    return 0;
}
