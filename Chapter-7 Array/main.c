#include <stdio.h>

int main(void)
{
    int arr[10] = {1};

    for(int i=0; i<10; i++)
    {
        printf("%i \n", arr[i]);
    }
    
    const int num = 10;

    return 0;
}
