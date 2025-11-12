 // DIAMOND KA CODE ^_^
        #include <stdio.h>
        
        int main() {
        int i, j, n;
        
        printf("Enter the number of rows for the diamond:\n");
        printf("==> ");
        scanf("%d", &n);
      // Upper part of diamond
        for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++){
        printf("  ");
        }
      //star [ * ] ke liye
        for(j = 1; j <= 2 * i - 1; j++) {
        printf("* ");
        }
        printf("\n");
        }                        
      // Lower part of diamond ^_^
        for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= n - i; j++){
        printf("  ");
        }
      // star ke liye :)
        for(j = 1; j <= 2 * i - 1; j++) {
        printf("* ");
        }
        printf("\n");
        }
        return 0;
        } 
      
