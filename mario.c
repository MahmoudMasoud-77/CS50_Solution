#include <stdio.h>
#include <cs50.h>
int main(void)
{
    
   int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    
    for (int i=1;i<=h;i++)
    {
        for(int j=1;j<=h;j++)
        {
            if(j<=h-i)
                printf(" ");
            else
                printf("#");
            
        }
        printf("\n");
    }
}

