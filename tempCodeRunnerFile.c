#include <stdio.h>

int main()
{
    int A, B;
    char operation, q;
    printf(" entre le nomre A : ");
    scanf("%d", &A);
    printf(" entre le operation : ");
    scanf("%s", &operation);
    if (operation == 'q')
    {
        printf("l'operation est arreter");
        exit(0);
    }
    else
    {
        printf(" entre le nomre B : ");
        scanf("%d", &B);
    }
    switch (operation)
    {
    case '+':
        printf("%d", A + B);
        break;
    case '-':
        printf("%d", A - B);
        break;
    case '*':
        printf("%d", A * B);
        break;
    case '/':
        if (B != 0)
            printf("%d", A / B);
        else
        {
            printf("error!!!!");
            break;
        }
    default:
        printf("error");
        break;
    }
}