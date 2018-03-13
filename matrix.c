#include <stdio.h>
#define A 256
#define B 512
#define C 4096
int main(){

    int x, i, j, z, sum;
    int arr1[A][B];
    int arr2[B][C];
    int result[A][C];

    for(i = 0; i < A; i++){
        for(j = 0; j < B; j++){
            arr1[i][j] = rand();
        }
    }

    for(i = 0; i < B; i++){
        for(j = 0; j < C; j++){
            arr2[i][j] = rand();
        }
    }

    for(i = 0; i < A; i++){
        for(j = 0; j < C; j++){
            sum = 0;
            for(z = 0; z < B; z++){
                sum += arr1[i][z]*arr2[z][j];
            }
            result[i][j] = sum;
        }
    }
    
    return 0;
