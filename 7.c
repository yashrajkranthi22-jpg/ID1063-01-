//code by Yashraj
//on 09/09/26

#include<stdio.h>
#include<string.h>
void swap(char *s,char a,char b){
for(int i=0;i<strlen(s);i++){
if(s[i]==a){s[i]=b;}  //swaps a for b
}
printf("%s\n", s);
}
int main(){
char s[100];  //declaring string
char a,b;
scanf(" %s", s);
scanf(" %c", &a);
scanf(" %c", &b);
swap(s,a,b);
return 0;}
