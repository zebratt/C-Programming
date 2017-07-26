#include <stdio.h>

void q1(void)
{
    int n = 10;

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("%i  ", i * j);
        }

        printf("\n");
    }
}

int main(void)
{
    q1();

    return 0;
}
