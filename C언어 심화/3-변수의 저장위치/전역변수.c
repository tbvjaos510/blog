#include <stdio.h>

int num = 5;

void func(){
    num +=5;
}
int main(void){
    func();
    printf("%d", num);
}