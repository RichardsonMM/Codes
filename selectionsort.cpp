#include<stdio.h>
#include<utility>

using namespace std;

void selectionsort(int arr[], int n){
    int i, j, min_idx;
    for(i = 0; i < n - 1; i++){
        min_idx = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[min_idx], arr[i]);
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
