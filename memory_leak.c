#include<stdio.h>
#include<stdlib.h>

void sum()
{
    int *ptr = (int*)malloc(sizeof(int));
    printf("Enter Number: ");
    scanf("%d", ptr);
    printf("Nuber is: %d", *ptr);
}

void main()
{
    printf("Hello World");
    int *ptr;
    int choise = 1;

    while (choise < 50)
    {
        printf("Memory leak");
        ptr = (int*)malloc(40000*sizeof(int));
        // choise ++;
        scanf("%d", &choise);
    }

    printf("Done execution!");
}