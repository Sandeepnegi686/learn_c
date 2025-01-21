#include <stdio.h>

// int main(){
    // int table = 5;
    // for(int i = 1; i <= 10; i++){
    //     printf("5 * %d = %d\n",i, i * table);
    // }
    // for(int i = 10;i >= 1;i--){
    //     printf("%d\n",i);
    // }
//     return 0;
// }

// int main(){
//     int i = 5;
//     printf("i = %d\n",i--);
//     printf("%d",0-1);
//     return 0;
// }

// int main(){
    
//     for(char ch = 'a;' ch <= 'z'; ch++){
//         printf("ch : %s", ch);
//     }
//     return 0;
// }

// int main(){

//     int a = 1;
//     while(a >= 1) {
//         printf("a : %d\n",a);
//         a++;
//     }
//     return 0;
// }

// int main(){
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     while(num >= 1){
//         printf("%d\n",num--);
//     }
//     return 0;
// }

// int main(){

//     int num;
//     printf("enter a number : ");
//     scanf("%d",&num);
//     int sum = 0;
//     int temp = num;
//     while(temp >= 1){
//         printf("%d\n",temp);
//         sum += temp;
//         temp--;
//     }

//     printf("Sum from 1 to %d is %d.",num,sum);
// }
// int main(){
    
//     int num = 2;
//     while(num % 2 == 0){
//         printf("Enter a number : ");
//         scanf("%d",&num);
//         if(num % 2 != 0){
//             printf("You choose odd number : %d\n",num);
//             break;
//         }else{
//             printf("You choose even number\n");
//         }
//     }
//     return 0;
// }

// int main(){
//     int num = 2;
//     do{
//         printf("enter a number : ");
//         scanf("%d",&num);
//         if(num % 2 != 0){
//             break;
//         }
//     } while(1);
//     return 0;
// }

// int main(){
//     int num = 0; 
//     while(1){
//         printf("enter number");
//         scanf("%d",&num);
//         if(num % 7 == 0){
//             break;
//         }
//     }
//     return 0;
// }

// int main(){
//     int number = 0;
//     int factorial = 1;
//     printf("enter a number : ");
//     scanf("%d",&number);


//     for(int i = number; i >= 1; i--){
//         factorial *= i;
//     }
//     printf("Factorial of %d is %d",number,factorial);
//     return 0;
// }
int main(){
    int i=5;
    int sum=0;
    // while(1){
    //     printf("2 * %d = %d\n",t,t*2);
    //     t--;
    //     if(t==0) break;
    // }
    while(i<=10){
        sum += i++;
    }
    printf("%d",sum);
    return 0;
}