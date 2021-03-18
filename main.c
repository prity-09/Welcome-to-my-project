#include <stdio.h>
#include "welcome.h"
#include "world.h"
int main()
{
    //command to compile is
    // g++ main.c welcome.c world.c -o project
    printf("Hello World\n");

    sayWelcome();
    sayWorld();
    int a = 2;
    int b=3;
    int result = sum(a,b);
    printf("Sum of %d and %d is %d\n", a, b, result);
    int isEven = isNumberIsEven(result);

    if(isEven == 1) {
        printf("%d is an even number\n", result);
    } else {
        printf("%d is an odd number!\n", result);
    }
    return 0;
}