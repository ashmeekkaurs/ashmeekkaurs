#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;

    printf("Enter the number to find its divisor");
    scanf("%d", &n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\n");
            printf("%i",i);
            printf("\n");
        }
    }
    printf("\n");
    printf("Are it's divisors");
    return 0;
}
