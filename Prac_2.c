#include<stdio.h>
#include<string.h>

void main(){
    printf("Enrolment No : 20C22014\n");
    printf("Name : Aum Kansara\n");
    char String[100];
    int Special_characters[31]={33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64,91,92,93,94,96,123,124,125,126};
    char keywords[32][9]={"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
    int flag=0;
    int len;
    printf("Enter Identifier :");
    gets(String);
    len=strlen(String);
    for(int n=0;n<31;n++){
        if(strcmp(String,keywords[n])==0){
            flag=1;
            break;
        }
    }
        if(flag==0){
            if(len>=1 && len<=31){
                if((String[0]>=65 && String[0]<=90) || (String[0]>=97 && String[0]<=122) || (String[0]==95)){
                    for(int i=0;i<len;i++){
                        if(flag==0){
                            if(String[i]!=32){
                                for(int j=0;j<32;j++){
                                    if(String[i]==Special_characters[j]){
                                        flag=1;
                                        break;
                                    }
                                }
                            }
                            else if(String[i]==32){
                                flag=1;
                                break;
                            }
                        }
                    }
                }
                else{
                    flag=1;
                }
            }
            else{
                flag=1;
            }
        }
        if(flag==0){
            printf("This is a Valid Identifier");
        }
        else{
            printf("This is not a Valid Identifier");
        }
}