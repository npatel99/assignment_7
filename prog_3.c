#include<stdio.h>
/*Write a program to check whether a given number is there in the Fibonacci series or not.****/
int main()
{
    int prev = 0, curr = 1, next, n, i;
    printf("Enter any number : ");
    scanf("%d", &n);
    //here i<=n condition is to limit no of iteration enter into infinite loop
    for(i=1; i<=n ; i++)
    {
        next = prev + curr;
        if(next == n)
            break;
        prev = curr;
        curr = next;
    }
    if(next == n)
        printf("given number %d is present in fabonacci series\n", n);
    else
        printf("given number %d is not present in fabonacci series\n", n);

    printf("\n");
    return 0;
}
