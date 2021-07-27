#include<stdio.h>

int main(){ 
    FILE *ptr;
    ptr = fopen("sample2.txt","r");
    int num;
    fscanf(ptr,"%d", &num);
    fclose(ptr);
    num = num*2;
    ptr = fopen("sample2.txt","w");
    fprintf(ptr,"%d", num);
    fclose(ptr);
    return 0;
}