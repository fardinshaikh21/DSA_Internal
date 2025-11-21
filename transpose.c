#include <stdio.h>

int main(){

    int arr[3][3]= { {1,2,3},
                      {4,5,6},
                      {7,8,9} };

    int i,j;
    

    printf("The elements of the array are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    
    printf("The Transpose elements of the array are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}