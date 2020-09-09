#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int checkvowel(char,char,char,char,char,char);
int main()
{
	char text[1000];
	int i, n;
	printf("Input Text : ");
	scanf("%s", text);
	n = strlen(text);
	for (i = 0; i < n; i++)
	{
		if (checkvowel(text[i], 'a', 'e', 'i', 'o', 'u') == 1 || checkvowel(text[i], 'A', 'E', 'I', 'O', 'U') == 1)
		{
			printf("There is vowel.\n");
			break;
		}
		if (i == n - 1)
		{
			printf("There is not vowel.\n");
		}
	}
}
int checkvowel(char x, char v1, char v2, char v3, char v4, char v5)
{
	if (x == v1 || x == v2 || x == v3 || x == v4 || x == v5)
	{
		return 1;
	}
}
