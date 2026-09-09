#include <stdio.h>
#include <string.h>
int pal(char *s){
for(int i=0; i<strlen(s)/2+strlen(s)%2; i++){
if(s[i]!=s[strlen(s)-i-1]){return 0;}
}
return 1;}
int main(){
char s[100];
fgets(s,sizeof(s),stdin);
s[strcspn(s, "\n")] = 0;
if(pal(s)==1){
printf("It is palindrome");}
else{printf("Not a palindrome");}}
