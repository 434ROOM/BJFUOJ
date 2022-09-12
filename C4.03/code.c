#include <stdio.h>

int main(){
    int line,i,j;
    scanf("%d",&line);
    for (i=1; i<=line; i++) {
        for (j=1; j<=i; j++) {
            printf("%d*%d=%d ",j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}
