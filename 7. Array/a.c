#include<stdio.h>

// int main(){

//     float price[3] = {100,200.0,300.0};

    // printf("Enter 1st price : ");
    // scanf("%f",&price[0]);
    // printf("Enter 2nd price : ");
    // scanf("%f",&price[1]);
    // printf("Enter 3rd price : ");
    // scanf("%f",&price[2]);

    // printf("price + GST = %f\n", price[0] + (price[0] * 0.18));
    // printf("price + GST = %f\n", price[1] + (price[1] * 0.18));
    // printf("price + GST = %f\n", price[2] + (price[2] * 0.18));

//     return 0;

// }


// int main(){
//     int a = 1;
//     int b = 1;
//     // int c = 1;
//     printf("address of a = %d\n",&a);
//     printf("address of b = %d\n",&b);
//     // printf("address of c = %d\n",&c);
//     int *ptr = &a;
//     printf("ptr = %d\n",ptr);
//     ptr--;
//     printf("ptr = %d\n",ptr);
//     *ptr = 2;
//     printf("value at ptr b is : %d\n",*ptr);


//     printf("value of a = %d\n",a);
//     printf("value of b = %d\n",b);

//     return 0;
// }

// int main(){
//     char words[2] = {'a','b'};
//     printf("value of a : %c, address of a : %p\n",words[0], &words[0]);
//     printf("value of a : %c, address of b : %p\n",words[1], &words[1]);
//     return 0;
// }

// int main(){
//     char a = 'a';
//     char b = 'b';
//     char *ptr = &a;

//     ptr--;
//     printf("address of a = %d\n", &a);
//     printf("address of b = %d\n", &b);

//     *ptr = 'c';

//     printf("value of b : %c",b);

//     return 0;
// }

// int main(){
//     int aadhar[5];
//     int *ptr = &aadhar[0];

//     for(int i = 0;i < 5;i++){
//         printf("enter %d index : ",i);
//         scanf("%d",ptr + i);
//     }

//     for(int i = 0; i < 5; i++){
//         printf("%d index value is : %d\n", i , *ptr + i);
//     }

//     return 0;
// }

void printNumbers(int arr[], int num);
// void printNumbers(int *ptr, int num);

// int main(){
//     int arr[6] = {11,22,33,44,55,66};
//     printNumbers(arr,6);
//     return 0;
// }

void printNumbers(int arr[], int num){
    for(int i = 0; i < num; i++){
        printf("%d\t",arr[i]);
    }
    // for(int i = 0;i < num; i++){
    //     printf("%d\t",*(ptr + i));
    // }
}

// void printOddNumbers(int arr[], int n);

// int main(){
//     int arr[6] = {11,22,33,44,55,66};
//     int n = 6;
//     printOddNumbers(arr,n);
//     return 0;
// }

// void printOddNumbers(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         if(arr[i] % 2 != 0){
//             printf("%d\t",arr[i]);
//         }
//     }
// }

// void reverseArray(int arr[], int n);

// int main(){
//     int numbers[6] = {11,22,33,44,55,66};
//     int n = 6;

//     reverseArray(numbers, n);
//     printNumbers(numbers, n);

//     return 0;
// }

// void reverseArray(int arr[], int n){
//     int left = 0;
//     int right = n - 1;
//     while (left < right){
//         int temp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp;
//         left++;
//         right--;
//     }
// }

// void reverseArray(int arr[], int n);

// int main(){
//     int numbers[6] = {11,22,33,44,55,66};
//     int n = 6;    

//     reverseArray(numbers, n);
//     printNumbers(numbers, n);

//     return 0;
// }

// void reverseArray(int arr[], int n){
//     for(int i = 0;i < n / 2; i++){
//         int first = arr[i];
//         int last = arr[n - i - 1];
//         arr[i] = last;
//         arr[n - i - 1] = first;
//     }
// }

// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     if(n < 3){
//         printf("Number should be greater then 2");
//         return 0;
//     }

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for(int i = 2; i < n; i++){
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d\t",fib[i]);
//     }

//     return 0;
// }


// __________________________________________________ 2D Array

// int main(){
//     // int arr[][2] = {{1,2},{3,4}};
//     // printf("%d",arr[0][1]);
//     int marks[][3] = {{90,45,76},{45,84,70}};
//     printf("1st student, english marks : %d\n",marks[0][0]);
//     printf("1st student, hindi marks : %d\n",marks[0][1]);
//     printf("1st student, maths marks : %d\n",marks[0][2]);
//     printf("2st student, english marks : %d\n",marks[1][0]);
//     printf("2st student, hindi marks : %d\n",marks[1][1]);
//     printf("2st student, maths marks : %d\n",marks[1][2]);
//     return 0;
// }

// {{2,4,6,8},
// {3,6,9,12}}

int main(){
    int table[2][10];
    for(int t = 2;t <= 3; t++){
        for(int i = 1; i<= 10;i++){
            table[t-2][i - 1] = t * i;
        }
    }

    for(int t = 0; t < 2;t++){
        for(int r = 1; r <= 10;r++){
            printf("%d\n",table[t][r-1]);
        }
    }

    return 0;
}