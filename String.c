#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[50], b[50]; //string 1 and string 2 are represented as a and b
    int op;            //option selected by the user is represented as op
    printf("\n ---MENU--- \n 1. To find the length of the string. \n 2. To concatenate the string.");
    printf("\n 3. To find reverse of a string. \n 4. To copy one string to another string.");
    printf("\ Enter the option: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf(" Enter the String: ");
        scanf("%s", a);
        int l =strlen(a); //l is the length of the string
        printf("Length of the string entered : %d\n\n", l);
        break;
    case 2:
        printf("\nEnter the first string: ");
        scanf("%s", a);
        printf("Enter the second string: ");
        scanf("%s", b);
        strcat(a, b);
        printf("String After Concatenation is : %s\n\n", a);
        break;
    case 3:
        printf("Enter the String: ");
        scanf("%s", a);
        strrev(a);
        printf("Reverse string : %s\n\n", a);
        break;
    case 4:
        printf("Enter the first string: ");
        scanf("%s", a);
        printf("Enter the second string: ");
        scanf("%s", b);
        printf("\nString Before Copied:\n first String=\"%s\"\n second String=\"%s\"\n", a, b);
        strcpy(b, a);
        printf("Strings After Copied:\nfirst String=\"%s\",\n second String=\"%s\"\n\n", a, b);
        break;
    }
    return 0;
}
