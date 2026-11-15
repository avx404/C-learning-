#include <stdio.h>

int main()
{
    int b;
    scanf("%d", &b);

    do{
        printf("the value of b is: %d\n", b);
        b++;
    } while(b<=10);
    return 0;
}