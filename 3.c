//code by Yashraj Kranthi
//Date - 09/09/26


#include <stdio.h>
int main(){
char s[20];
scanf("%s", s);//user input
char a;
a=s[0];  //saving parts of the word as differnet variables
s[0]=s[1];
s[1]=a;
printf("%s\n", s); // printing updated word
return 0;}
