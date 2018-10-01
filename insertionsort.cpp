#include<stdio.h>

using namespace std;

void insertionsort(int arr[], int n){
    int i, chave, j;
    for(i = 0; i < n; i++){
        chave = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > chave){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = chave;
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
