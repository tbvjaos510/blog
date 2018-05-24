#include <stdio.h>

void func(void)
{
	auto int a = 3; // int a = 3와 같다;
	printf("%p\n", &a); // 변수의 주소 사용 가능
}

int main(void)
{
	func(); 
	/*
    printf("%d\n", a);
	오류 발생. 변수가 선언된 대괄호 밖을 벗어나면 소멸됨.
	*/
}
