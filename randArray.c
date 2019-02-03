#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[30];
	int i, j, temp;
	for(i=0; i<30; i++){
		a[i] = i;
	}
	for(i=0;i<30;i++){
		j = rand() % 30;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;	
	}
	for(i=0;i<30;i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}