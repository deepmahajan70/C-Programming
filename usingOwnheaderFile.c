//File Name: usingOwnheaderFile.c
//Author: Mr. Deepak Mahajan
//Description: This file demonstrate, how we can use own header file in c program
//Returns:

#include<stdio.h>
#include"myheader.h"

void myFunction(int arg_x,int arg_y) {
    printf("Coordinates of Point are: %d and %d \n", arg_x,arg_y);
}

int main(int argc, int **argv[]){
    Point p = {4, 7};
    myFunction(p.x,p.y);
    return 0;
}