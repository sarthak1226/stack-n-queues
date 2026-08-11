#include <stdio.h>

int push(char *stack, int *i, char str)
{
    if (*i >= 20)
        return -1;

    stack[*i] = str;
    (*i)++;

    return 1;
}

int pop(char *stack, int *i, char str)
{
    if (*i <= 0)
        return -1;

    (*i)--;

    return 1;
}

int main()
{
    char str[20];

    printf("Enter String: ");
    scanf("%19s", str);

    int isoperand = 1;
    int index = 0;
    char stack[20];

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isoperand)
        {
            if ((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z'))
            {
                isoperand = 0;
            }

            else if (str[i] == '(')
            {
                if (push(stack, &index, str[i]) == -1)
                {
                    printf("Overflow");
                    return 0;
                }

                isoperand = 1;   // FIX
            }

            else
            {
                printf("Invalid eq");
                return 0;
            }
        }

        else
        {
             (str[i] == '+' ||
                str[i] == '-' ||
                str[i] == '*' ||
                str[i] == '/' ||
                str[i] == '%' ||
                str[i] == '^')
            {
                isoperand = 1;   /            }
 else if (str[i] == ')')
            {
                if (pop(stack, &index, str[i]) == -1)
                {
                    printf("Invalid string");
                    return 0;
                }

                isoperand = 0;
            }

            else
            {
                printf("Invalid String");
                return 0;
            }
}}
if (isoperand)    {
        printf("Invalid string");
        return 0;
    }

    if (index != 0)
    {
        printf("Bracket doesn't match");
        return 0;
    }

    printf("Valid string");

    return 0;
}

