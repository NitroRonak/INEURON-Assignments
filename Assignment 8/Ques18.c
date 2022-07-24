#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n; i++)
    {
        int k = i > n ? 2 * n - i : i;
        for (int spaces = 0; spaces <= n - k; spaces++){
            printf(" ");
        }
        for (int j = k; j >= 1; j--){
            printf("*");
        }
        for (int j = 2; j <= k; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}