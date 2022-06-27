
#include <stdio.h>

int n;
int k;
int A[100000];

unsigned int binary_search (int lb, int ub, int k){
while (ub - lb > 1){
int mid = (lb + ub ) / 2;
if (A[ mid ] >= k) ub = mid ;
else lb = mid ;
}
return ub ;
}

int main(){
    int i, ub, lb;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
    }
    
    
    lb=0;
    ub=n;

    
    int res=0;
    res = binary_search(lb, ub, k);
    printf("%d\n", res);


    return 0;
}
