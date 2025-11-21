#include<stdio.h>

void subtractionPolynomial(int poly1[],int ploy2[],int result[],int n){
    for(int i=0;i<n;i++){
        result[i]=poly1[i]-ploy2[i];
    }
}

void accept(int poly[],int n){

    for(int i=0;i<n;i++){
        printf("Enter coefficient of x^%d: ",i);
        scanf("%d",&poly[i]);
    }
}

void display(int poly[],int n){

    for(int i=0;i<n;i++){
        printf("%d",poly[i]);

        if(i!=0){
            printf("x^%d",i);
        }

        if(i!=n-1){
            printf(" - ");
        }
    }
}

int main(){
    int i,n;

    int poly1[10],poly2[10],result[10];

    printf("Enter the degree of polynomial: ");
    scanf("%d",&n);

    printf("\nEnter first polynomial:\n");
    accept(poly1,n);

    printf("\nEnter second polynomial:\n");
    accept(poly2,n);

    printf("\nAddtion of Two Polynomilials:\n");
    subtractionPolynomial(poly1,poly2,result,n);

    display(result,n);
    return 0;

}