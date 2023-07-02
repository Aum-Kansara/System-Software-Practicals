#include<stdio.h>
#include<string.h>

void main(){
    printf("Enrolment No : 20C22014\n");
    printf("Name : Aum Kansara\n");
    char String[1000];
    int len;
    printf("Enter the String :");
    gets(String);
    len=strlen(String);

    if(String[0]=='/' && String[1]=='*'){
        printf("This line is Comment");
    }
    else if(String[0]=='/' && String[1]=='/'){
        printf("This line is Comment");
    }
    else{
        printf("This Line is not a Comment");
    }
    
}