#include<stdio.h>
#include<conio.h>
void main()
{
    char s[5];
    printf("\n Enter any operator:");
    gets(s);

    switch(s[0])
    {
        case'>':
            if(s[1]=='=')
                printf("\n Greater than or equal");
            else if(s[1] == '>')
                printf("\n LeftShift operator");
            else
                printf("\n Greater than");
            break;
        case'<':
            if(s[1]=='=')
                printf("\n Less than or equal");
            else if(s[1] == '<')
                printf("\n RightShift operator");
            else
                printf("\n Less than");
            break;
        case'=':
            if(s[1]=='=')
                printf("\n Equal to");
            else
                printf("\n Assignment");
            break;
        case'!':
            if(s[1]=='=')
                printf("\n Not Equal");
            else
                printf("\n Bitwise Not");
            break;
        case'&':
            if(s[1]=='&')
                printf("\n Logical AND");
            else
                printf("\n Bitwise AND");
            break;
        case'|':
            if(s[1]=='|')
                printf("\n Logical OR");
            else
                printf("\n Bitwise OR");
            break;
        case'+':
            if(s[1] == '=')
                printf("\n Addition Assignment");
            else if(s[1] == '+')
                printf("\n Increment operator");
            else
                printf("\n Addition");
            break;
        case'-':
           if(s[1] == '=')
                printf("\n Subtraction assignment");
            else if(s[1] == '-')
                printf("\n Decrement operator");
            else
                printf("\n Subtraction");
            break;
        case'*':
            if(s[1] == '=')
                printf("\n Multiplication assignment");
            else if(s[1] == '*')
                printf("\n Power");
            else
                printf("\n Multiplication");
            break;
        case'/':
           if(s[1] == '=')
                printf("\n Division assignment");
            else if(s[1] == '/')
                printf("\n floor Division");
            else
                printf("\n Division");
            break;
        case'%':
            if(s[1] == '=')
                printf("\n Modulo assignment");
            else
                printf("\n Modulus");
            break;
        default: printf("\n Not a operator");

    }
    getch();

}
