#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int gcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int euler(int n)
{
	int counter = 0;
	for (int i = 1; i < n; i++)
	{
		if (gcd(n, i) == 1)
			counter++;
	}
	return counter;
}


void main()
{
	printf("the result : %d", euler(720));
}