#include <stdio.h>

int main()
{
    int a,count;
    scanf("%d",&a);
    if (a!=0) {
        for (count=0; a>=1; count++) {
            a/=10;
        }
    } else {
        count=1;
    }
    
    printf("%d",count);
    return 0;
}
