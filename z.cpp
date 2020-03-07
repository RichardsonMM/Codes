#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<ll>fib;
ll aux = 0;


ll nums(ll n){
	int x = n;
	int count = 0;
	for(int i = 13; i >= 0 ; i--){
		if(fib[i] <= x){
			aux += x - fib[i];
			count++;
			if(aux == 0){
				return count;
			}
			x = aux;
		}
	}
}

int main(){

	fib[0] = 1;
	fib[1] = 2;

	for(ll i = 2; i < 34; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}

	ll x = nums(14);
	cout << x << endl;

	

	return 0;
}
