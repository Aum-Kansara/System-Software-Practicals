#include <stdio.h>
#include <string.h>
void main(){
    printf("Enrolment No : 20C22014\n");
    printf("Name : Aum Kansara\n");
    char str[100],operators[100],identifiers[100];
    int len=0,opr_len=0,idt_len=0;
    printf("Enter the Expression : ");
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)|| (str[i]>=48 && str[i]<=57)){
            identifiers[idt_len]=str[i];
            idt_len++;
        }
        else{
        operators[opr_len]=str[i];
        opr_len++;
        }
    }
    printf("Operators Are :\n");
    for(int i=0;i<opr_len;i++){
        printf("%c\n",operators[i]);
    }
    printf("Identifiers Are :\n");
    for(int i=0;i<idt_len;i++){
        printf("%c\n",identifiers[i]);
    }
}