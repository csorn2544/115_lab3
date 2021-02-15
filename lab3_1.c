#include <stdio.h>
int main()
{
    int score,sum=0,winner=0,maxscore=0;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=4; j++)
        {
            scanf("%d",&score);
            sum+=score;
        }
        if ( sum > maxscore )
        {
            maxscore = sum;
            winner = i;
        }
        sum=sum*0;
    }
    printf("%d %d\n", winner, maxscore);
    return 0;

}
