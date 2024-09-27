#include <stdio.h>
void main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 8; j++)
        { // columns j=1

            if (i == 2 && j==2)
            {
                printf(" *         SAKSHI          *");
            }
            else if(j!=2 && i!=2)
            {
                printf("   *   ");
            }
        }
        printf("\n");
    }
}