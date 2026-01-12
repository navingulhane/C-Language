
.        #include <stdio.h>
        int main() {
        int a, b, c, choice;
    
        printf("Entre three numbers :\n");
        scanf("%d %d %d", &a, &b, &c);
    // choice logic ^=^
        printf("\nEnter 1 for Smallest, 2 for Greatest\n");
        scanf("%d", &choice);
    
        if(choice == 1) {
            //smallest
        if (a <= b && a <= c) {
            printf("%d is the smallest number\n",a);
        }
        else if(b <= a && b <= c) {   
        printf("%d  is the smallest number\n",b);    
        }
        else {
        printf("%d is the smallest number\n",c);
        }
        }
        else if (choice == 2) {
            //greatest
        if(a >= b && a >= c) {
            printf("%d is the greatest number\n",a);
        }
        else if (b >= a && b >= c) {
            printf("%d is the greatest number\n",b);
        }
        else {
            printf("%d is the greatest number\n",c);
        }
        }
        return 0;
        }
