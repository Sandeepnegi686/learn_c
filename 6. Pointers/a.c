#include<stdio.h>

// int main(){
//     int a = 22;
//     printf("%d\n",&a);

//     // int *pointer = &a;
//     printf("%d",*(&a));

//     return 0;
// }

// int main(){
//     int x = 10;
//     int *pointer;
//     pointer = &x;
//     printf("%d\n",&x);
//     printf("%d\n",pointer);
//     printf("%d\n",x);
//     *pointer = 21;
//     printf("%d\n",x);
//     (*pointer)++;
//     printf("%d",x);
//     return 0;
// }

// int main(){
//     float num = 10.00;
//     float *ptr = &num;
//     float **pptr  = &ptr;
//     printf("%d\n",&ptr);
//     // *(**pptr) = 1.0;
//     printf("%f\n",**pptr);
//     // **pptr
    
//     return 0;
// }

// void square(int *num);

// int main(){
//     int a = 4;
//     printf("%d\n",a);
//     square(&a);
//     printf("%d\n",a);
//     return 0;
// }

// void square(int *num){
//     *num = *num * *num;
// }

// void swap(int *a, int *b);

// int main(){
//     int x = 2,y=4;
//     printf("x = %d,y = %d\n",x,y);
//     swap(&x,&y);
//     printf("x = %d,y = %d",x,y);
//     return 0;
// }

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int x = 4;
//     printf("%d",&x);
//     return 0;
// }

void sumFunc(int *x, int *y, int *sum);
void productFunc(int *x, int *y, int *product);
void avgFunc(int *x, int *y, int *avg);

int main(){
    int a, b;
    int sum,avg,product;
    int userChoice;


    while(userChoice != 0){
        printf("---------------------------\n");
        printf("Enter a number : \n");
        printf("Choose 1 for add : \n");
        printf("Choose 2 for product : \n");
        printf("Choose 3 for avg : \n");
        printf("Choose 0 for Exit the function : \n");

        scanf("%d",&userChoice);

        if(userChoice == 0){
            break;
        }

        switch(userChoice){
            case 1:
                printf("Enter 1st value : ");
                scanf("%d",&a);
                printf("Enter 2st value : ");
                scanf("%d",&b);
                sumFunc(&a,&b,&sum);
                printf("sum of %d and %d is %d\n",a,b,sum);
                continue;
            case 2:
                printf("Enter 1st value : ");
                scanf("%d",&a);
                printf("Enter 2st value : ");
                scanf("%d",&b);
                productFunc(&a, &b, &product);
                printf("product of %d and %d is %d\n",a,b,product);
                continue;
            case 3:
                printf("Enter 1st value : ");
                scanf("%d",&a);
                printf("Enter 2st value : ");
                scanf("%d",&b);
                avgFunc(&a, &b, &avg);
                printf("Avg of %d and %d is %d\n",a,b,avg);
                continue;
            default:
                printf("\nPlease choose a number.");
                continue;
        }

    }
    printf("Thank you for using our application");
    return 0;
}

void sumFunc(int *x, int *y, int *sum){
    *sum = *x + *y;
}

void productFunc(int *x, int *y, int *product){
    *product = *x * *y;
}

void avgFunc(int *x, int *y, int *avg){
    *avg = (*x + *y) / 2;
}