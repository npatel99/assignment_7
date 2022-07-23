#include<stdio.h>
/*Write a program to print first N terms of Fibonacci series
*Fibonnaci series - 1 1 2 3 5 8 13 21 34 55 89 ........
*Fn = Fn-1 + Fn-2; next = curr + prev;
*/
int main()
{
    int prev = 0, curr = 1, next, n, i;
    printf("Enter the nth term : ");
    scanf("%d", &n);
    printf("Fabonacci series is: %d ", curr);
    
    for(i=1; i<n ; i++)
    {
        next = prev + curr;
        printf("%d ", next);
        prev = curr;
        curr = next;
    }
    printf("\n");
    return 0;
}
