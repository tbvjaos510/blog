#include <stdio.h>

void func(void)
{
	register int a = 3; // int a = 3와 같다;
	/*
	printf("%p\n", &a);
	오류 발생. register변수는 포인터연산을 못 한다.
	*/
}

int main(void)
{
	func(); 
	//함수밖을 벗어나면 소멸됨.
}
