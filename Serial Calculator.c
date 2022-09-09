 #include <stdio.h>
#include <ctype.h>

int main()
{

    float a,b;
    char sign;

    printf("Enter an expression: ");
    scanf("%f", &a);

    while ((sign = getchar()) != '\n')
    {
        switch (sign)
        {
        case '+':
            scanf("%f", &b);
            a=a+b;
            break;
        case '-':
            scanf("%f", &b);
            a=a-b;
            break;
        case '*':
            scanf("%f", &b);
            a=a*b;
            break;
        case '/':
            scanf("%f", &b);
            a=a/b;
            break;
        default:
            break;
        }
    }

    printf("Value of expression: %.2f\n", a);
    return 0;
}
