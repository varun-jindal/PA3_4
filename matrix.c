#include <stdio.h>
#include <stdlib.h>
#define A 256
#define B 512
#define C 4096

int main(){

    int x, i, j, z, sum;
    int arr1[256][512];
    int arr2[512][4096];
    int result[256][4096];

    for(i = 0; i < 256; i++){
        for(j = 0; j < 512; j++){
            arr1[i][j] = 1;
        }
    }

    for(i = 0; i < 512; i++){
        for(j = 0; j < 4096; j++){
            arr2[i][j] = 1;
        }
    }

    for(i = 0; i < 256; i++){
        for(j = 0; j < 4096; j++){
            sum = 0;
            for(z = 0; z < 512; z++){
                sum += (arr1[i][z])*(arr2[z][j]);
            }
            result[i][j] = sum;
	    printf("%d ", sum);
        }
	printf("/n");
    }
    
    return 0;
}
