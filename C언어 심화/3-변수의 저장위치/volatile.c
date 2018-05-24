//프로젝트를 Release버전으로 설정해 줘야 한다.

#include <stdio.h>
#include <time.h>

#define _ num+=1;

int main(void)
{
	int num = 0;
	//volatile int num = 0;
	while (num < 999999999)
		num++;
	printf("%d\n%ld\n", clock(), num);
}
