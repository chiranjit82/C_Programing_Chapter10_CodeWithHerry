#include<stdio.h>

int main(){ 
    FILE *ptr;
    FILE *ptr2;
    int num;
    int num2;
    ptr = fopen("rubai.txt","r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value is %d \n", num);
    printf("The value is %d \n", num2);
    ptr2 = fopen("rub.txt","r");
    fclose(ptr2);
    if (ptr2 == NULL)
    {
        printf("The value does not exit.");
    }
    
    return 0;
}