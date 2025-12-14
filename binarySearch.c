#include <stdio.h>

int binarySearch(int arr[],int low,int high, int target){

    while(low <= high){

        int mid = low + (high - low) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    
    return -1;
}

int main(){

    int arr[10]={11,12,23,34,45,56,67,78,89,90}; // Sorted array
    int target;

    printf("Enter the element to search: ");
    scanf("%d",&target);

    int result = binarySearch(arr, 0, 9, target);

    if(result != -1){
        printf("Element found at index: %d\n",result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}