#include<stdio.h>

int main() {

 int x;
 printf("give me a number: ");
 scanf("%d", &x);
 
 for(int i = 1; i <= x; i++){
     
     float y = x%i;
     if (y==0){
        printf("\n %d", i);}
     
     
 }
 return 0;
}
