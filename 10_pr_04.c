#include<stdio.h>
#include<string.h>

int main(){ 
    char name1[20];
    char name2[20];
    char name3[2];
    int salary1;
    int salary2;
    printf("Enter the name of the 1st employ: ");
    gets(name1);
    printf("Enter the salary of the 1st employ: ");
    scanf("%d", &salary1);
    printf("Enter the name of the 2nd employ: ");
    gets(name2);
    gets(name2);
    printf("Enter the salary of the 2nd employ: ");
    scanf("%d", &salary2);
    FILE *ptr;
    ptr = fopen("employ.txt","w");
    char *ch1 = name1;
    while (*ch1 != '\0')
    {
        fputc(*ch1,ptr);
        ch1++;
    }
    
    fprintf(ptr,"\t %d \n", salary1);
    char *ch2 = name2;
    while (*ch2 != '\0')
    {
        fputc(*ch2,ptr);
        ch2++;
    }
    fprintf(ptr,"\t %d \n", salary2);
    fclose(ptr);
    return 0;
}