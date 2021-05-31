#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,r,n,i,ans;
    printf("%s"," enter first term\n");
    scanf("%d",&a);
    printf("%s","common ratio\n");
    scanf("%d",&r);
    printf("%s","number of terms\n");
    scanf("%d",&n);
    for(i=0;i<n;i++);
    {
        ans=a*(pow(r,i));
        ans+=ans;
    }
    ans=ans-a;
	printf("%d\n",ans );
    return 0;
}
