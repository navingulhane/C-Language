// Check the greatest of 3 numbers...

#include <stdio.h>

int main() {
int a, b, c;
printf("Enter 3 numbers:\n");
scanf("%d %d %d", &a, &b, &c);

if (a >= b && a >= c) {
printf("%d is the greatest number\n", a);
}
else if (b >= a && b >= c) {
printf("%d is the greatest number\n", b);
}
else {
printf("%d is the greatest number\n", c);
}
return 0;
}
