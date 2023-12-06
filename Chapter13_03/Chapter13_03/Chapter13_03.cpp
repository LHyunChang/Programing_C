#include <stdio.h>

int main()
{
	char str1[] = "My String";
	const char* str2 = "Your String";
	printf("%s\n%s\n", str1, str2);

	str2 = "Our String";
	printf("%s\n%s\n", str1, str2);

	str1[0] = 'X';
	/*str2[0] = 'X';*/
	printf("%s\n%s\n", str1, str2);

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d %d %d\n", *arr[0], *arr[1], *arr[3]);

	return 0;
}