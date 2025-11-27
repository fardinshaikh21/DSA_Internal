#include <stdio.h>

int main(){
    int arr[7]={64,34,25,12,22,11,90};

    int i,j,temp;

    printf("Before Sorting Array is : \n");

    for(i=0;i<7;i++){
        printf("%d ",arr[i]);
    }

    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){

            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }    
        
        }
    }

    printf("\nAfter Sorting Array is : \n");    

    for(i=0;i<7;i++){
        printf("%d ",arr[i]);
    }   

    
    return 0;
}