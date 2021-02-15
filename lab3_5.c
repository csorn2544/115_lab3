#include<stdio.h>
int main()
{
    int luckynum,k=2,x,count=0,count2=0;
    scanf("%d",&luckynum);
    x=luckynum;
    while(x!=1)
    {

        while(x%k==0)
        {
            x/=k;
            if(x%k==0)
            {
                count++;
            }
            count2++;
            printf("%d\n",count2);
        }
        k++;
    }
    if(count==0&&count2<=3)
        printf("%d is Lucky Number",luckynum);
    else if (count>=1&&count2<=3)
        printf("%d is not a Lucky Number",luckynum);
    return 0;
}
