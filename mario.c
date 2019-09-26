#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=h+i+1;j++)
        { 
            if(j>=1 && j<=h)
            {
                if(j<=h-i)
                    printf(" ");
                else
                    printf("#");
            }
            else if(j==h+1)
            {
                printf("  ");
            }
            else
            {
                printf("#");
            }
            
        }
        printf("\n");
    }

}
