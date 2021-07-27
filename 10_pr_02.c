#include<stdio.h>

int main(){ 
    FILE *ptr;
    ptr = fopen("multiplication.txt","w");
    fprintf(ptr,"The Multiplication table of 5 is: \n");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"5 X %d = %d \n", i, i*5);
    }
    fclose(ptr);
    return 0;
}