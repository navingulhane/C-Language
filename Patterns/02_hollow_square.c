.....// Hollow Square ka codeee [^_^],,.
  #include <stdio.h>

  int main() {
  int n, i, j;

  printf("Enter the size of the square: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++) {
  for(j = 1; j <= n; j++) {
// Borders pr star ke liye :) 
  if(i == 1 || i == n || j == 1 || j == n) {
  printf("* ");
  } else {
  printf("  ");
// For space inside the sphere ^_^ 
  }
  }
  printf("\n");
  }
  return 0;
  }
