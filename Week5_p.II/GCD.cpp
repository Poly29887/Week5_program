#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int min(int, int);
int main()
{
	int num1,num2,num3;
	int gcd=1,n,i = 1;
	printf("Input : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	n = min(min(num1, num2), min(num2, num3));
	while (i <= n)
	{
		if (num1 % i== 0 && num2 % i== 0 && num3 % i== 0) gcd = i;
		i++;
	}
	if (gcd == 1) printf("ERROR\n");
	else	printf("Output : %d\n", gcd);

}
int min(int x, int y)
{
	if (x < y)	return x;
	else 	return y;
}