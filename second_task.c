#include<stdio.h>

int main() {

 int x;
 printf("give me a number: ");
 scanf("%d", &x);
 int z = 0;
 for(int i = 1; i < x; i++){
     
     int y = x%i;
     if (y==0){
        printf("\n %d", i);
         z += i;
     }
        }
        
if (z==x){
    printf("\nthis is a perfect number");}
  return 0;
}
