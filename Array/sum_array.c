 #include<stdio.h>
 int main () {
 int arr[5] ;                     
//Array hold 5 numbers :)
 int i = 0, sum = 0; 

 printf("Entre 5 numbers:\n");
 for(i = 0; i < 5; i++) {
 scanf("%d", & arr [i]);
 sum = sum + arr [i];             
// imp stuff [ ^ 0 ^ ]
 }
 printf("Sum of the number is :%d\n", sum); 
//Print total sum..
 return 0;
 }
