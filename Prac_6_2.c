#include <stdio.h>
#include <stdlib.h>

char * file_to_array(FILE *fp,int *arr_len);

void main(){
    printf("Enrolment No : 20C22014\n");
    printf("Name : Aum Kansara\n");
    FILE *fp;
    char *file;
    int len=0;
    int identifier_counter=0;
    fp=fopen("test.txt","r");
    file=file_to_array(fp,&len);
    for(int i=0;i<len;i++){
        int equal_to_index=0;
        while(file[i]!='=' && i<len){
            printf("%c",file[i]);
            i++;
        }
        while(file[i]!='\n'){
            i++;
        }
        identifier_counter++;
        printf("\n");
        

    }
    printf("Total Count of Identifiers is : %d",identifier_counter);
}


char* file_to_array(FILE *fp,int *arr_len){
    char c;
    char *file;
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    c=getc(fp);
    int chr_counter=0;
    //code for count characters in file
    while(c!=EOF){
        chr_counter++;
        c=getc(fp);
    }
    //for allocate array of size which is given by chr_counter
    file=(char *) malloc(chr_counter*sizeof(char));
    //for set file pointer on starting of file
    fseek(fp,0,SEEK_SET);
    //for store file's characters inside array
    for(int i=0;i<chr_counter;i++){
        file[i]=getc(fp);
    }
    *arr_len=chr_counter;
    return file;
}