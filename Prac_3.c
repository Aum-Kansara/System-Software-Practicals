#include<stdio.h>
void main(){
    printf("Enrolment No : 20C22014\n");
    printf("Name : Aum Kansara\n");
    char str[5],opr_1;
    printf("Enter Operator : ");
    gets(str);
    opr_1=str[0];
    switch (opr_1)
    {
    case '>':
        if(str[1]=='='){
            printf("Greater than or equal");
        }
        else{
            printf("Greater than");
        }
        break;
    case '<':
        if(str[1]=='='){
            printf("Less than or equal Operator");
        }
        else{
            printf("Less than Operator");
        }
        break;
    case '=':
        if(str[1] == '='){
            printf("Equal to");
        }
        else{
            printf("Assignment");
        }
        break;
    case '!':
        if(str[1] == '='){
            printf("Not Equal");
        }
        else{
            printf("Bit Not");
        }
        break;
    case '&':
        if(str[1]=='&'){
            printf("Logical AND");
        }
        else{
            printf("Bitwise AND");
        }
        break;
    case '|':
        if (str[1] == '|'){
            printf("Logical OR");
        }
        else{
            printf("Bitwise OR");
        }
        break;
    case '+':
        if(str[1]=='='){
            printf("Plus and equal to Operator");
        }
        else{
            printf("Addition");
        }
        break;
    case '-':
        if(str[1]=='='){
            printf("Minus and equal to Operator");
        }
        else{
            printf("Substraction");
        }
        break;
    case '*':
        printf("Multiplication");
        break;
    case '/':
        printf("Division");
        break;
    case '%':
        printf("Modulus");
        break;
    default:
        printf("Not a operator");
    }
}