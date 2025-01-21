#include<stdio.h>
#include<string.h>
// int main(){
//     // char name[10] = {'A','B','C','\0'};
//     // puts(name);
//     // name = "rahul";
//     // puts(name);

//     char name[] = "rhaul";
//     puts(name);
//     return 0;
// }

// int main(){
//     char name[] = "Rahul";

//     printf("%d\n",&name);

//     char *ptr = name;

//     printf("%i\n",*ptr);

//     return 0;
// }

void printString(char string[]);

// int main(){
//     char name[] = "Rahul negi";
//     printString(name);
//     return 0;
// }

// void printString(char string[]){
//     for(int i = 0; string[i] != 0; i++ ){
//         if(string[i] == 108){
//             printf("*");
//         }
//         printf("%c", string[i]);
//     }
// }

// int main(){
//     char name[] = "Rahul Negi";
//     printf("%s",name);
//     return 0;
// }

// int main(){
//     char name[100];
//     printf("enter your name : ");
//     fgets(name,10,stdin);
//     printf("your name is ");
//     puts(name);

//     return 0;
// }

// int main(){
//     // char *name = "rahul";
//     // puts(name);
//     // name = "sandeep";
//     // puts(name);

//     char name[3] = "Aja";
//     puts(name);
//     name[0] = 'a';
//     puts(name);
//     return 0;
// }

// int stringLengthCalculatar(char string[]);

// int main(){
//     char name[50];
//     printf("Enter your name : ");
//     fgets(name,50,stdin);
//     printf("Your name is %s. And it has %i characters", name, stringLengthCalculatar(name));
// }

// int stringLengthCalculatar(char string[]){
//     int count = 0;
//     for(int i = 0; string[i] != 0; i++){
//         count++;
//     }
//     return count;
// }

int main(){
    char str1[] = "hello";
    char str2[] = "world";
    char empty[] = "";
    strcpy(empty, str2);
    puts(empty);
    return 0;
}