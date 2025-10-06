#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


int main(){

float x , z;

/* Input values of x */
printf("input value of x: ");
scanf("%f", &x);


/* Conditions of lab */
if (x <= 1) {
	
	z=sin(x);
	printf("x<=1, then z = sin(x) = %0.6f", &z);
	
	} 
	
	else {
	z=x-log(x);
	printf("x>1, then z= x-ln(x) = %0.6f", &x);
	}

}