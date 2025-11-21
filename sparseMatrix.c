#include <stdio.h>

int main(){

    int arr[4][4]= { {0,0,3,0},
                      {4,0,0,6},
                      {0,8,0,0},
                      {0,0,0,9} };

    int i,j;
    

    printf("The elements of the array are:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int sparse[100][3];
    int length = 0; 

    printf("Sparse Matrix Representation:\n");

    printf("Row\tColumn\tValue\n");
    for(i=0;i<4;i++){
         for(j=0;j<4;j++){
           if(arr[i][j] != 0){
                sparse[length][0] = i;
                sparse[length][1] = j;
                sparse[length][2] = arr[i][j];
                printf("%d\t%d\t%d\n",sparse[length][0],sparse[length][1],sparse[length][2]);
                length++;
           }
        }
    } 
  
    return 0;
}