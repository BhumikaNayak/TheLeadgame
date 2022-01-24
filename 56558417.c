//The Lead Game codechef problem 
#include<stdio.h>
int main()
{
    int N;//number of rounds in the games
    scanf("%d",&N);
    int player1,player2,i,sum1=0,sum2=0,difference; //declaration of variables
    int winner,lead=0;
    
    for(i=0;i<N;i++)//using for loop
    {
     scanf("%d %d",&player1,&player2);
     fflush(stdin);
     sum1 += player1;
     sum2 += player2;
                //logic 
     if(sum1 > sum2)
     {
        difference=sum1-sum2; 
        if(difference>lead)
        {
        lead=difference;
        winner=1;
        }
     }
     else if(sum2 >sum1)
     {
        difference=sum2-sum1;
        if(difference>lead)
        {
            lead=difference;
            winner=2;
        }
     }
    }
    printf("%d",winner);
    printf("\t");   //using for space create between winner and lead
    printf("%d",lead);
    return 0;
}
//code by Bhumika Nayak


