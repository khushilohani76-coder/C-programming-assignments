#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push Function
void push(char ch)
{
    top++;
    stack[top] = ch;
}

// Pop Function
char pop()
{
    return stack[top--];
}

// Match Function
int match(char open, char close)
{
    if(open == '(' && close == ')')
        return 1;

    if(open == '{' && close == '}')
        return 1;

    if(open == '[' && close == ']')
        return 1;

    return 0;
}

int main()
{
    char exp[100];

    printf("Enter Expression: ");
    scanf("%s", exp);

    for(int i = 0; i < strlen(exp); i++)
    {
        char ch = exp[i];

        // Opening Brackets
        if(ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }

        // Closing Brackets
        else if(ch == ')' || ch == '}' || ch == ']')
        {
            if(top == -1)
            {
                printf("Not Balanced\n");
                return 0;
            }

            char x = pop();

            if(match(x, ch))
            {
                continue;
            }
            else
            {
                printf("Not Balanced\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Balanced Parentheses\n");
    else
        printf("Not Balanced\n");

    return 0;
}