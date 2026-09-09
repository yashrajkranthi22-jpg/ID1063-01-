#include <stdio.h>
void printBorder(int count){
for(int i=0; i<count;i++) printf("*");
printf("\n");
}
int main(){
int a;
scanf("%d", &a);
printBorder(a);
return 0;}
