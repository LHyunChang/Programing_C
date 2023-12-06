#include <stdio.h>
#include <string.h>

int main()
{
	//char str1[20] = "1234567890";
	//char str2[20];
	//char str3[5];

	///**** case1 ****/
	//strcpy_s(str2, strlen(str1)+1, str1);
	//puts(str2);

	///**** case2 ****/
	///*strncpy_s(str3, 5, str1, sizeof(str3));
	//puts(str3);*/

	///**** case3 ****/
	//strncpy_s(str3, sizeof(str3), str1, sizeof(str3)-1);
	//str3[sizeof(str3) - 1] = 0;
	//puts(str3);

	char str1[] = "My String";
	char str2[] = "My String";

	if (str1 == str2)
		puts("문자열 같음!!!");
	else
		puts("같지 않음!!!");

	printf("%d", strcmp(str1, str2));

	return 0;
}