#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 2

int *add(int arr[])
{
    static int counter = 0;
    for(int i=0; i<MAX_SIZE; i++)
    {
        arr[i] = arr[i] + counter + 10;
        printf("with in: %d\n", arr[i] + counter + 10);
    }
    counter++;
    printf("Counter: %d\n", counter);
    return arr;
}

int main()
{
    // int* ptr;
    int* ptr = (int*)malloc(MAX_SIZE*sizeof(int));
    // int ptr[MAX_SIZE];

    for(int i=0; i<MAX_SIZE; i++)
    {
        // ptr[i] = i+1;
        printf("Enter Number: ");
        scanf("%d", ptr+i);
    }

    for(int i=0; i<MAX_SIZE; i++)
    {
        printf("Number: %d\n", *(ptr+i));
    }
    // free(ptr);
    int *art = add(ptr);
    printf("Arr Data: %d\n", art);
    for(int i=0; i<MAX_SIZE; i++)
    {
        printf("Add: %d\n", *(art+i));
    }
    art = add(ptr);
    printf("Arr Data2: %d\n", art);
    for(int i=0; i<MAX_SIZE; i++)
    {
        printf("Add2: %d\n", *(art+i));
    }
    art = add(ptr);
    printf("Arr Data3: %d\n", art);
    for(int i=0; i<MAX_SIZE; i++)
    {
        printf("Add3: %d\n", *(art+i));
    }
}