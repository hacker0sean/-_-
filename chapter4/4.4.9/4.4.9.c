//
// Created by sean on 5/24/18.
//
#include <stdio.h>
int A[15] = {1, 2,3, 4, 5, 6, 7, 9,10,11,12,13,14, 15,16};
    int length = 16;12
    void lack(int low, int high);
int k;
int main(){
    lack(0, 15);
}

void lack(int low, int high){
    printf("low = %d, high = %d\n", low, high);
    k = (high - low) / 2 + low;
    if ((high - low) == 1){
        if (A[low] != (low+1)) {
            printf("lack %d", low + 1);
        }
        else if (A[high] != (high + 1)){
            printf("lack %d", high + 1);
        }
        else {
            printf("no lack!");
        }
        return;
    }
    else if ((A[k] > (k + 1)) && (A[k - 1] == k)){
        printf("lack %d", k+1);
        return;
    }
    else{
        if (A[k] == (k+1))
            lack(k + 1, high);
        else
            lack(low, k - 1);
    }
}
