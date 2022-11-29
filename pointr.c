#include <stdio.h>

void update(int *a,int *b)
 {
    // Complete this function 
    int aa = *(a);
    *a = *(a) + *(b);
    *b = aa - *(b);
    if((*b) < 0)
    {
        *b = (*b) * -1;
        printf("Tru");
    }
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n", a, b);
    update(pa, pb);
    printf("\n%d\n%d", a, b);

    return 0;
}