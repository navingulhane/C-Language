  //  .parallelogram     ka       code   ^_^
  #include <stdio.h>

  int main() {
  int i, j, n;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++) {
// Print spaces first to shift stars
  for(j = 1; j <= n - i; j++) {
  printf(" ");
  }
// for printing star [ * ]
  for(j = 1; j <= n; j++) {
  printf("* ");
  }
  printf("\n");
  }
  return 0;
  }
