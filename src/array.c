#include <stdio.h>

int n;
int k;
int A[100000];

int p(unsigned int a) {
    return A[a] >= k ;
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    lb = -1 ;
    ub = n ;
    while (ub - lb > 1) {
        unsigned int m = (lb + ub)/2 ;
        if (p(m)) ub = m ;
        else lb = m;
    }
    
    
    printf ("%d\n" , ub) ;
    return 0 ;
}
