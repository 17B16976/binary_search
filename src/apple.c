#include <stdio.h>

int n;
int k;
int A[100000];

int p(int a) {
    int b = 0 ;
    int s = 0 ;
    while ( b < n ) {
        if (A[b] % a == 0) {s = s + (A[b]/a) ;
            b = b + 1 ; }
        else {s = s + 1 + (A[b]/a) ;
            b = b + 1 ; }
    }
    return  s <= k ;
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n ; i++){
        scanf("%d", &A[i]);
    }
    lb = 0 ;
    ub = 1000000000 ;
    while (ub - lb > 1) {
        int m = (lb + ub)/2 ;
        if (p(m)) ub = m ;
        else lb = m;
    }
    printf ("%d\n",ub) ;
    return 0;
}
