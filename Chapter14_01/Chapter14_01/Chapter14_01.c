#include <stdio.h>

void ShowArrayElem(int* param, int len)
{
	for (int i = 0; i < len; i++) 
	{
		printf("%d ", param[i]);
	}
	printf("\n");
}	
void AddArrayElem(int* param, int len, int add)
{
	for (int i = 0; i < len; i++)
	{
		param[i] += add;
	}
}

int main() 
{
	int arr1[3] = { 1, 2, 3 };
	/*int arr2[5] = { 4, 5, 6, 7, 8 };*/
	AddArrayElem(arr1, sizeof(arr1) / sizeof(int), 1);
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));

	AddArrayElem(arr1, sizeof(arr1) / sizeof(int), 2);
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));

	AddArrayElem(arr1, sizeof(arr1) / sizeof(int), 3);
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));
	//ShowArrayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}