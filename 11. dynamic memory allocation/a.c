#include<stdio.h>
#include<stdlib.h>

// int main(){
//     int *ptr;
//     // ptr = (int *) malloc(20);
//     // printf("size of int : %d\n",sizeof(int));
//     // printf("size of float : %d\n",sizeof(float));
//     // printf("size of char : %d\n",sizeof(char));

//     ptr = (int *) malloc(4 * sizeof(int));
//     printf("ptr : %p\n",ptr);
//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     for(int i = 0; i < 4;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }


// int main(){
//     float *mptr;
//     mptr = (float *) malloc(4 * sizeof(float));
//     mptr[0] = 11.1;
//     mptr[1] = 12.1;
//     mptr[2] = 11.0;
//     mptr[3] = 12.0;

//     for(int i = 0;i < 4; i++){
//         printf("%f\n",mptr[i]);
//     }

//     return 0;
// }

// int main(){
//     float ptr;
//     ptr = (float *) calloc(50 * sizeof(float));

//     printf("%d",ptr[0]);
//     return 0;
// }

// int main(){

//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));

//     printf("Enter numbers(5) : ");

//     for(int i = 0; i < 5; i++){
//         scanf("%d",&ptr[i]);
//     }
//     printf("---------------------");

//     for(int i = 0; i < 5; i++){
//         printf("%d\n",ptr[i]);
//     }

//     printf("---------------------");

//     ptr = realloc(ptr, 8);

//     for(int i = 0; i < 8; i++){
//         scanf("%d",&ptr[i]);
//     }
//     printf("---------------------");

//     for(int i = 0; i < 8; i++){
//         printf("%d\n",ptr[i]);
//     }
    
//     return 0;
// }

// int main(){
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));

//     printf("Enter values(5) : ");
//     for(int i = 0; i < 5; i++){
//         scanf("%d",&ptr[i]);
//     }
//     printf("----------------------\n");
//     for(int i = 0; i < 5; i++){
//         printf("%d\n",ptr[i]);
//     }

//     ptr = realloc(ptr, 8);

//     printf("Enter values(8) : ");
//     for(int i = 0; i < 8; i++){
//         scanf("%d",&ptr[i]);
//     }
//     printf("----------------------\n");
//     for(int i = 0; i < 8; i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("enter odd numbers(5) : ");
    for(int i = 0; i < 5; i++){
        scanf("%d",&ptr[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("no. %d is %d\n",i+1,ptr[i]);
    }
    ptr = realloc(ptr, 6);
    printf("enter 6 even no. :");
    for(int i =0;i<6;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("no %d is %d\n",i+1,ptr[i]);
    }
    
    free(ptr);

    return 0;
}