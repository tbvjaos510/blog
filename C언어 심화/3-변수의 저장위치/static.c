#include <stdio.h>

void func() {
	static int num = 5;
	num += 10;
	printf("%d\n", num);
}

int main(void)
{
	func();
	func();
}
