#include <cs50.h>
#include <stdio.h>

int main(void)
{


      {
        int x;

        do
        {
            x = get_int("possitive interger : ");

    for (int i = 0; i <= x; i++)


    {
        
        

        for(int k = x - 1; k >= i; k--)

        {
            printf(" ");

        }

        for(int j = i; j < (i*2); j++)
        {
            printf("#");
        }

        printf("   ");


        for(int k = 1; k <= i; k++)

        {
            printf("#");

        }

        printf("\n");


    }

        }
        while (x > 8);
        printf("invaid number");
        return x;
    }


  //  int x = get_int("number line :");
}