#include <stdio.h>

void accept(int arr[],int n){

    printf("Enter the coefficients of the polynomial in increasing order of power: \n");

    for(int i=0;i<n;i++){
        printf("Coefficient of x^%d : ",i);
        scanf("%d",&arr[i]);
    }
}

void display(int arr[],int n){

    for(int i=0;i<n;i++){
        
        if(i!=0){
            printf("+");
        }

        printf(" %dx^%d ",arr[i],i);
    }
    printf("\n");
}

void subtract(int poly1[],int poly2[],int result[],int n1,int n2){

    int maxDegree = (n1 > n2) ? n1 : n2;
    result[maxDegree];

    for(int i=0;i<maxDegree;i++){
        int coeff1 = (i < n1) ? poly1[i] : 0;
        int coeff2 = (i < n2) ? poly2[i] : 0;
        result[i] = coeff1 - coeff2;
    }

}

int main(){
    
    int n1,n2;

    printf("Enter the degree of the polynomial 1 : ");
    scanf("%d",&n1);

    int poly1[n1];
    accept(poly1,n1);
   
    printf("\nEnter the degree of the polynomial 2 : ");
    scanf("%d",&n2);

    int poly2[n2];
    accept(poly2,n2);

    int result[(n1>n2)?n1:n2];  

    printf("\nFirst Polynomial is : ");
    display(poly1,n1);

    printf("Second Polynomial is : ");
    display(poly2,n2);

    printf("\nSubtraction of Two Polynomial is : ");
    subtract(poly1,poly2,result,n1,n2);
    display(result,(n1>n2)?n1:n2);

    return 0;
}