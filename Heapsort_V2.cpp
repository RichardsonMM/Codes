#include<stdio.h>
#include<algorithm>
#define MAX 1000
using namespace std;

int main(){

    int  a[MAX], n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    make_heap(&a[0], &a[n]);
    sort_heap(&a[0], &a[0]+n);
    
    printf("Vetor Ordenado: ");
    for(int j = 0; j < n; j++){
        printf("%d ", a[j]);
    }
    printf("\n");

    return 0;

}
