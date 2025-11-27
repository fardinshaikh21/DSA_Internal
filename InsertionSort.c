#include <stdio.h>

int main(){

    int arr[7]={64,34,25,12,22,11,90};

    int i,j,key;

    printf("Before Sorting Array is : \n");

    for(i=0;i<7;i++){
        printf("%d ",arr[i]);
    }

    
    for(i=1;i<7;i++){

        key = arr[i];

        for(j=i-1;arr[j]>key;j--){
            arr[j+1]=arr[j];
        }

        arr[j+1] = key;
    }


    printf("\nAfter Sorting Array is : \n");
    for(i=0;i<7;i++){
        printf("%d ",arr[i]);
    }

    
    return 0;
}