#include <stdio.h>
int main () {
  
  int age;
  float weight;
  
  printf("Entre your age : \n");
    scanf("%d",&age);
  
  printf("Entre your weight: \n");
    scanf("%f",&weight);
    
    printf("\n--- your details ---\n");
    printf("Age ==>%d\n",age);
    printf("Weight ==>%0.1f\n",weight);
    
    return 0;
}
