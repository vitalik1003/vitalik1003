#include <stdio.h>
#include <string.h>
#include <conio.h>

int func(int *arr, int length, int number)
{
	int amount = 0;
	for (int i = 0; i < length; i++)
	{
		if (*arr == number) { amount++; }
		arr = arr + 1;
	}
	return amount;
}
int func(char* str, char ch)
{
	int amount = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (*str == ch) { amount++; }
		str = str + 1;
	}
	return amount;
}
int main()
{
	const int len = 10;
	int arr[len], number;
	char str[128], ch;

	printf("Enter string: ");
	gets_s(str, 128);
	printf("\n");
	printf("Char for count: ");
	scanf_s("%c", &ch);

	for (int i = 0; i < len; i++)
	{
		printf("\nEnter next number: ");
		scanf_s("%d", &arr[i]);
	}
	printf("Number for count: ");
	scanf_s("%d", &number);
	printf("\n");

	int* ip = &arr[0];
	char* cp = &str[0];
	int iamount = func(ip, len, number);
	int chamount = func(cp, ch);

	printf("\nAmount of %d in array: %d", number, iamount);
	printf("\nAmount of %c in string: %d", ch, chamount);

	_getch();
	return 0;
}