#include<stdio.h>

int main(){ 
    FILE *ptr;
    ptr = fopen("rubai.txt","r");
    int num1, num2, num3;
    fscanf(ptr,"%d", &num1);
    fscanf(ptr,"%d", &num2);
    fscanf(ptr,"%d", &num3);
    fclose(ptr);
    printf("The number is %d \n", num1);
    printf("The number is %d \n", num2);
    printf("The number is %d \n", num3);
    return 0;
}