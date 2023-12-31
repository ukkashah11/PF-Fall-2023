//Programmer: Syed Ukkashah
//Description: Using functions to calculate persistence of a number
//Date: 28th October 2023
#include<stdio.h>
#include <stdlib.h>
int persistence(int n){
	int x=1, cnt=0;
	while(1){
		if(n>9){
		for(;n>0; n/=10 ){
		  x*=(n%10);		
		}
		n=x;
		x=1;
		cnt++;

	}
	else{
		break;
	}
}
	return cnt;
}
int main(){
	char input [100];
	printf("Enter a number: ");
	gets(input);
	printf("Persistence of %s is %d", input, persistence(atoi(input))); //atoi function turns string input to an integer (used for the EOF condition to be met)
}
