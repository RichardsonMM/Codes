#include<stdio.h>
#include<utility>

using namespace std;

void bubblesort(int arr[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    /*
    Se o vetor for dado pronto faz assim:

    int arr[] = {elementos do vetor};
    int N = sizeof(arr)/sizeof(arr[0]);

    */
    int arr[10000];
    int N;
    
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    bubblesort(arr, N);

    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
