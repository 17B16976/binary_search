#include <stdio.h>

int n;
int k;
int A[100000];

int p(int a) {
    int b = -1 ;
    int s = 0 ;
    while ( b < n-1) {
        s = s + A[b+1]/a ;
        b = b + 1 ;
    }
    return  s < k ;
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    lb = 0 ;
    ub = 10000 ;
    while (ub - lb > 1) {
        unsigned int m = (lb + ub)/2 ;
        if (p(m)) ub = m ;
        else lb = m;
    }
    printf ("%d\n" , lb) ;
    return 0;
}
