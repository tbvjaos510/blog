#include <stdio.h>
#include <stdlib.h>

#define max(X, Y) (X > Y ? X : Y)
int * value;
int * weight;

int bag(int i, int bagweight){

    if (i < 0, bagweight <= 0)
        return 0;
    if (bagweight > weight[i])
    {
        return max(bag(i-1, bagweight), bag(i-1, bagweight - weight[i]) + value[i]);
    }
    else{
        return bag(i-1, bagweight);
    }
}

int main(void)
{
    int n = 0;
    int maxweight = 0;
    scanf("%d %d", &n, &maxweight);
    value = (int *)malloc(sizeof(int) * n);
    weight = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &(weight[i]), &(value[i]));
    }
    printf("%d", bag(n-1, maxweight));
    
}