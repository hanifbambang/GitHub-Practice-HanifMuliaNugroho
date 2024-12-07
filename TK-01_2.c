#include<stdio.h>

int main()
{
    // answer number 2, 0 is sentinel value
    int a=0,b=0,c=0;
    int number=1;
    printf("Input number\nType 0 to quit\n");
    while (number != 0)
    {
        scanf("%d", &number);
        if (number == 1)
        {
            a++;
        }
        if (number == 2)
        {
            b++;
        }
        if (number == 3)
        {
            c++;
        }
    }
    printf("numbers of 1: %d\nnumbers of 2: %d\nnumbers of 3: %d", a,b,c);
    return 0;
}