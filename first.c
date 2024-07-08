//File Name: first.c
//Author: Mr. Deepak Mahajan
//Description: First C program to demonstrate basics
//Returns:nothing
#include<stdio.h>
int main(int argc,char **argv[]){
    printf("Hello World!, this program receives %d arguments", argc);
    for(int i = 0;i<argc;i++){
        printf("ARGUMENT No. %d: %s",i,argv[i]);
    }
return 0;
}