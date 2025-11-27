#include <stdio.h>

int main(){

    int arr[7] = {56, 5, 1, 40, 10,2, 25};

    int i,j,temp;


    printf("Before Sorting Array is : \n");
    for(i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    
    for(i=0;i<7;i++){
        for(j=0;j<7-i;j++){

            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
    for(i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}