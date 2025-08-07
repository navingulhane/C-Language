#include <stdio.h>
int main () {
    int i, j;
    int n;
    
    printf("Enter a number of triangle ^_^ \n");
    printf("==> ");
    scanf("%d",&n);

    for (i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            if(i==n || j==1 || j==i) {
                printf("* ");
            }
            else {
                printf("  "); // two spaces for better alignment
            }
        }
        printf("\n"); // Move this outside the inner loop
    }
    return 0;
}
