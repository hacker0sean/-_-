//
// Created by sean on 5/24/18.
//
#include <stdio.h>
void HeapPermute(int n);
int A[4] = {1 ,2, 3, 4};
int length = 4;
int temp;
int h = 0;
int main(){
    HeapPermute(4);
    printf("\ntotal = %d\n", h);
}

void HeapPermute(int n){
    if (n == 0){
        h++;
        for (int j = 0; j < length; j++){
            printf("%d ", A[j]);
        }
        printf("\n");
    }
    else{
        for (int i = 0; i < n; i++) {
            HeapPermute(n - 1);
            if ((n % 2) == 1) {
                temp = A[n-1];
                A[n-1] = A[0];
                A[0] = temp;
            }
            else{
                temp = A[n-1];
                A[n-1] = A[i];
                A[i] = temp;
            }
        }
    }
}

