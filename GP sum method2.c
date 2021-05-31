#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;//first term
	int r;//difference
	int n;//place of last term
	scanf("%d%d%d",&a,&r,&n);
	float sum=0;
	if(r>1)
	sum=a*(pow(r,n)-1)/(r-1);
	else
	sum=a*(1-pow(r,n))/(1-r);
	printf("%f\n",sum );

    return 0;

}
