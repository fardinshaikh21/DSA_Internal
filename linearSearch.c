#include <stdio.h>

int linearSearch(int arr[],int target){

    for(int i=0;i<10;i++){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[10]={34,56,23,89,12,67,45,78,90,11};
    int target;

    printf("Enter the element to search: ");
    scanf("%d",&target);

    int result = linearSearch(arr,target);

    if(result != -1){
        printf("Element found at index: %d\n",result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}