#include <stdio.h>
void main()
{
    printf("Enrolment No : 20C22014\n");
    printf("Name : Aum Kansara\n");
    char postfix[50][20];
    char str[100];
    int i = 0, row = 0, j, temp = 65;
    printf("Enter an Expression : ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            postfix[row][0] = str[i];
            postfix[row][1] = str[i - 2];
            postfix[row][2] = str[i - 1];
            postfix[row][3] = temp;
            str[i - 2] = temp;
            temp++;
            row++;
            j = i;
            i = 0;
            j++;
            while (str[j] != '\0')
            {
                str[j - 2] = str[j];
                j++;
            }
            str[j - 2] = '\0';
        }
        else{
            i++;
        }
    }
    for (int j=0;j<row;j++){
        printf("\n%c    %c    %c    %c\n", postfix[j][0], postfix[j][1], postfix[j][2],postfix[j][3]);
    }
}