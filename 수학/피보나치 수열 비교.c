#include <stdio.h>
#include <time.h>

long fibo_arr[50];

long fibo_dynamicP(int n){
    
    if (fibo_arr[n] != -1)
        return fibo_arr[n];
    if (n < 2)
        fibo_arr[n] = n;
    else
        fibo_arr[n] = fibo_dynamicP(n - 1) + fibo_dynamicP(n - 2);

    return fibo_arr[n];
}
long fibo_refunc(int n)
{
    if (n < 2)
        return n;
    return fibo_refunc(n-1) + fibo_refunc(n-2);
}

int main(void){
    for(int i = 0; i < 50; i++)
        fibo_arr[i] = -1;
    int n = 0;
    scanf("%d", &n);
    long savetime = clock();
    printf("%ld\n", fibo_dynamicP(n));
    printf("fibo_dynamic : %ldms\n", clock() - savetime);

    printf("%ld\n", fibo_refunc(n));
    printf("fibo_refunc : %ldms\n", clock() - savetime);
    return 0;
}