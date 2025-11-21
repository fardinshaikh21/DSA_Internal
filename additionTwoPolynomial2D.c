#include<stdio.h>

void additionPolynomial(int poly1[][2],int ploy2[][2],int result[][2],int n){
    for(int i=0;i<n;i++){
        result[i][0]=poly1[i][0]+ploy2[i][0];
    }
}

void accept(int poly[][2],int n){

    for(int i=0;i<n;i++){
        printf("Enter coefficient of x^%d: ",i);
        scanf("%d",&poly[i][0]);
    }
}

void display(int poly[][2],int n){

    for(int i=0;i<n;i++){
        printf("%d",poly[i][0]);

        if(i!=0){
            printf("x^%d",i);
        }

        if(i!=n-1){
            printf(" + ");
        }
    }
}

int main(){
    int i,n;

    int poly1[10][2],poly2[10][2],result[10][2];

    printf("Enter the degree of polynomial: ");
    scanf("%d",&n);

    printf("\nEnter first polynomial:\n");
    accept(poly1,n);

    printf("\nEnter second polynomial:\n");
    accept(poly2,n);

    printf("\nAddtion of Two Polynomilials:\n");
    additionPolynomial(poly1,poly2,result,n);

    display(result,n);
    return 0;

}