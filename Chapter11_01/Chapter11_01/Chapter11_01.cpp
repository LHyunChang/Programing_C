#include<stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, 50);
	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���� ���� ��� : ");
	while (str[idx] != '\0')
	{
		printf("%c\t", str[idx]);
		idx++;
	}
	printf("\n");
}