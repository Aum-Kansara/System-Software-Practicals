#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    printf("Enrolment No : 20C22014\n");
    printf("Name : Aum Kansara\n");
    char str[100];
    int flag=0;
    printf("Enter the String :");
    gets(str);
    int len=strlen(str);
    if(str[0]>=97 && str[0]<=122){
        printf("This is Invalid Grammer\n");
    }
    else{
        char left=str[0];
    for(int i=0;i<len;i++){
        if(str[3]==left){
            printf("This is Left Recursive Grammer\n");
            flag=1;
            break;
        }
        else if(str[i]=='|'){
            if(str[i+1]==left){
                printf("This is left recursive Grammer\n");
                flag=1;
                break;
            }
        }
    }
if(flag==0){
    printf("This is not Left Recursive Grammer\n");
    exit(1);
}

if(flag==1){
    char A;
    char Alpha;
    char Beta;
    int index=3;
    // A->A&|#   where &=Alpha and #=Beta
    // After removing left Recursion :  
    //    A->#A'
    //   A'->&A'|$   where $=null
    A=str[0];
    while(str[index]!='|' && index<len){
        if(str[index]!=A){
            Alpha=str[index];
            break;
        }
        index++;
    }
    if(str[index]=='|'){
        index++;
    }
    while(index<len){
        Beta=str[index];
        index++;
    }
    printf("%c->%c%c'\n",A,Beta,A);
    printf("%c'->%c%c'|$",A,Alpha,A);




    }
  }
}