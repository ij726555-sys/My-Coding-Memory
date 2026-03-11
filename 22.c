#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int n; // 0 ~ 4294967295 범위의 정수를 저장할 수 있다.
	scanf("%u", &n); // %u를 사용 양수 전용
	printf("%u", n);

	return 0;
}
