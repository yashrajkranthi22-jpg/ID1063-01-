#include <stdio.h>
int main(){
double length,width;
scanf("%lf", &length);
scanf("%lf", &width);
calculateArea(length, width);
	return 0;
}
double calculateArea(double length, double width){
double area=length*width;
printf("%lf",area);
return 0;}
