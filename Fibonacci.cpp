#include<stdio.h>
#define MAX 65

using namespace std;

int main(){
	int  t, n, i;
    long long int fibs[MAX];
    fibs[0] = 0;
    fibs[1] = 1;
    for(int i = 2; i <= 60; i++)
        fibs[i] = fibs[i-1]+fibs[i-2];
	scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fibs[n]);
    }

	return 0;
}
