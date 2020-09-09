#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char text[1000];
	int i = 0;
	printf("Input : ");
	scanf("%s",text);
	printf("Output : ");
	while (text[i] != 0)
	{
		if (text[i] >= 65 && text[i] <= 90)
		{
			printf("%c", text[i]);
		}
		i++;
	}
	printf("\n");
}