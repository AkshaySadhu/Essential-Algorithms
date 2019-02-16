#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[] = {1,2,3,4,5,6};
	int j, temp;
	for(int i =0; i<=6;i++){
		j = (rand() % 6) - i;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for(int i =0;i<6;i++){
		printf("%d\n", a[i]%2);
	}
}