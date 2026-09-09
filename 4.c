//code by Yashraj
//09/09/26

#include <stdio.h>
#include <string.h>

int main(){
char s[20];
char c;
int count=0;
scanf("%s", s);
printf("character: \n");
scanf(" %c", &c);
for(int i=0; i<strlen(s); i++){
if(s[i]==c){printf("%d", count);
break;}
else if (s[i]!=" "){count++;}
}
return 0;}
