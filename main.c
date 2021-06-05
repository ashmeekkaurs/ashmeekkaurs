#include <stdio.h>
#include <stdlib.h>
int fibonacci(int); // function declaration
int main()
{
    int n;
    printf("\n enter the number of elements you wish to print: ");
    scanf("%d", &n);
    printf("\n0 1");
    fibonacci(n - 2); //function calling
}
int fibonacci(int n) //function defining
{
    static int el1 = 0, el2 = 1; //el stands for element
    static int new_el;           //the next element
    if (n > 0)
    {
        new_el = el1 + el2;
        el1 = el2;    //swapping places of elements to get the last element on the place of the precedding one
        el2 = new_el; //same as above
        printf(" %d", new_el);
        fibonacci(n - 1);
    }
}



