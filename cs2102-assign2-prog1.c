/*
Name: Debprasad Kundu
Roll No.: cs2102
Date:30th January, 2022
Programme Description: Finding k^n
*/
#include <stdio.h>

int f(int k, int n){
    if(1 == n)
        return k;
    else{
        if(1 == (n & 1))
            return k * f(k * k, n / 2);
        else
            return f(k * k, n / 2);
    }
}

int main()
{
    int k, n;
    float K, N;
    printf("Enter k and n :");
    scanf("%f%f", &K, &N);
    if(0 == (K - (int)K) && 0 == (N - (int)N)){
        n = (int)N;
        k = (int)K;
        if(k > 0 && n > 0)
            printf("%d", f(k,n));
        else
            printf("INVALID INPUT");
    }
    else
        printf("INVALID INPUT");   
    return 0;
}