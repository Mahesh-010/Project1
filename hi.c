#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int num){
    if(num<=1)
        return num;
    return num*factorial(num-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("",factorial(n));
}