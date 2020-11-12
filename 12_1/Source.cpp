#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int count(char* num)
{
	int a = 0;
	while (num[a] != '\0')
	{
		a++;
	}
	return a;
}

void PASA(char* data)
{
	for (int i = 0; i < count(data); i++)
	{
		if (data[i] >= 'a' && data[i] <='z')
		{
			for (int j = 0;  j < 5 ;  j++)
			{
				printf("%c", data[i] - 32);
			}
		}
		if (data[i] >= 'A' && data[i] <= 'Z')
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%c", data[i] + 32);
			}
		}
	}
}

int main()
{
	char str[1000];
	scanf("%[^\n]s",str);
	PASA(str);
	return 0;

}