#include<stdio.h>
/*Write a program to find the Nth term of the Fibonnaci series.
*Fibonnaci series - 1 1 2 3 5 8 13 21 34 55 89 ........
*Fn = Fn-1 + Fn-2; next = curr + prev;
*/
int main()
{
    int prev = 0, curr = 1, next, n, i;
    printf("Enter the nth term : ");
    scanf("%d", &n);
    
    for(i=1; i<n ; i++)
    {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    printf("%dth term of Fabonacci series is: %d", n, next);
    printf("\n");
    return 0;
}
