#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int arr[] = {a, b, c, d};
    // 3, 4, 6, 5
    // 3, 5, 8, 0
    int maxim=arr[3];
    int temp;
    for(int i=0; i<3; i++)
    {
        if(arr[i] > arr[i+1])
        {
            temp = arr[i];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    return arr[3];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}