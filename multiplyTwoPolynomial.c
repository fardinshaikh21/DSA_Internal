#include<stdio.h>

void multiplyPolynomial(int poly1[],int poly2[],int result[],int n1,int n2){
    
    for(int i=0;i<n1+n2;i++){
        result[i] = 0;
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            result[i+j] += poly1[i] * poly2[j];
        } 
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
            printf(" + ");
        }
    }
}

int main(){
    int i,n1,n2;

    int poly1[10],poly2[10],result[10];

    printf("Enter the degree of First polynomial: ");
    scanf("%d",&n1);

    printf("\nEnter first polynomial:\n");
    accept(poly1,n1);

    printf("Enter the degree of Second polynomial: ");
    scanf("%d",&n2);

    printf("\nEnter second polynomial:\n");
    accept(poly2,n2);

    printf("\nMultiplication of Two Polynomilials:\n");
    multiplyPolynomial(poly1,poly2,result,n1,n2);

    display(result,n1+n2-1);
    return 0;

}