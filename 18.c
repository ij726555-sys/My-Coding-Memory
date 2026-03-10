#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char data[51]; 
	scanf("%s", data); // 배열의 경우 주소값이기 때문에 &를 붙이지 않아도 된다.
	printf("%s", data);

	return 0;
}
