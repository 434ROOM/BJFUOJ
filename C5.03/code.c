#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x1,y1,x2,y2,s;
    scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
    s=abs(x1-x2)*abs(y1-y2);
    printf("%d",s);
    return 0;
} 
