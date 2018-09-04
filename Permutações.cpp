#include<stdio.h>
#include<algorithm>
#define MAX 1005

using namespace std;

int main(){

    int v[MAX];
    int n, cont = 0;
    int qtp = 0;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    sort(v, v+n);

    do{
        for(int j = 0; j < n; j++)
            printf("%d ", v[j]);
            cont++;
            if(cont == n-1)
                cont = 0;
                qtp++;
                printf("\n");

    }while(next_permutation(v, v+n));

    printf("Quantidade de permutações: %d\n", qtp);

    return 0;
}
