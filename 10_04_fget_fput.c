/*


#include<stdio.h>

int main(){ 
    FILE *ptr;
    ptr = fopen("chardemo.txt","r");
    // char c = fgetc(ptr);
    printf("The character is %c \n", fgetc(ptr));
    printf("The character is %c \n", fgetc(ptr));
    printf("The character is %c \n", fgetc(ptr));
    printf("The character is %c \n", fgetc(ptr));
    printf("The character is %c \n", fgetc(ptr));
    printf("The character is %c \n", fgetc(ptr));
    fclose(ptr);
    return 0;
}

*/

#include<stdio.h>

int main(){ 
    FILE *ptr;
    ptr = fopen("demoputc.txt","w");
    fputc('T',ptr);
    fputc('h',ptr);
    fputc('i',ptr);
    fputc('s',ptr);
    fputc('h',ptr);
    fclose(ptr);
    return 0;
}