#include<stdio.h>
/*Write a program to print first N terms of Fibonacci series
*Fibonnaci series - 0 1 1 2 3 5 8 13 21 34 55 89 ........
*Fn = Fn-1 + Fn-2; F0 = 0, F1 = 1
*/
int main()
{
    int f0 = 0, f1 = 1, f2, n, i;
    printf("Enter the n element: ");
    scanf("%d", &n);
    printf("Fibonnaci series: %d %d ", f0, f1);
    for(i=2; i<n ; i++)
    {
        f2 = f0+f1;
        printf("%d ", f2);
        f0 = f1;
        f1 = f2;
    }
    printf("\n");
    return 0;
}
