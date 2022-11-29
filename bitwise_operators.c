#include<stdio.h>
#include<stdlib.h>


int main()
{
    long int num;
    int remender;
    int bin[64];
    int count=0;
    // decimal to binary Converter
    printf("Enter number: ");
    scanf("%d", &num);
    // if (num > 9223454)
    // {
    //     printf("Out of Range Number: %d", num);
    //     return 0;
    // }
    for(int i=0; i<64; i++)
    {
        remender = num % 2;
        printf("%d", remender);
        num = num/2;
        // printf(" %d ", num);
        bin[i] = remender;
        count++;
        if(num == 0)
        break;
    }
    printf("Number of bit: %d\n", count);
    for(int j=count-1; j>=0; j--)
    {
        printf("%d ", bin[j]);
    }
    return 0;
}