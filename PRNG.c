#include<stdio.h>
int random(int X, int M){
	int A= 13, B=19;
	return ((A * X + B) % M);
	
};
int main()
{
	int M, X = 0, temp;
	printf("Enter the number less than which you want the random number to be");
	scanf("%d", &M);
	printf("Generating 10 random numbers");
	for(int i = 0;i<10;i++){
		temp = random(X, M);
		printf("%d, ", temp);
		X = temp;
	}
}