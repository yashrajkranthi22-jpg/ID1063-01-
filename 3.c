//code by Yashraj Kranthi
//Date - 09/09/26


#include <stdio.h>
void swit(void){   //swaps 1st letter of word with 2nd 
char a;
a=s[0];  //saving parts of the word as differnet variables
s[0]=s[1];
s[1]=a;
printf("%s\n", s); // printing updated word
}
int main(){
char s[20];
scanf("%s", s);//user input
return 0;}
