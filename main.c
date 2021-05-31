#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("Enter the number to find its Factorial : ");
    scanf("%d",&n);

    int i,factorial=1;
    for(i=1;i<=n;i++){
        factorial*=i;

    }
       printf("%d\n",factorial );
       printf("Is the factorial ");
       return 0;

}
