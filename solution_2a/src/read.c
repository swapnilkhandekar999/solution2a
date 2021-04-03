#include "header.h"
#include<stdio.h>

int fileReadUtil(FILE **fptr, char *buffer){
    return fscanf(*fptr,"%s",buffer);
}