#include <stdio.h>
#include <string.h>


// int main(){
//     FILE *fptr;
//     fptr = fopen("a.txt","r");
//     if(fptr != NULL){
//         printf("%p",fptr);
//         fclose(fptr);
//     }else{
//         printf("File does not exist");
//     }
//     return 0;
// }

// int main(){
//     char ch;
//     FILE *fptr;

//     fptr = fopen("a.txt","r");

//     fscanf(fptr,"%c",&ch);
//     printf("Character : %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("Character : %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("Character : %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("Character : %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("Character : %c\n",ch);

//     fclose(fptr);
//     return 0;
// }

// int main(){
//     char ch = 'a';
//     FILE *fptr;

//     fptr = fopen("a.txt","w");
//     fprintf(fptr, "%c", ch);
//     fprintf(fptr, "%c", 'b');
//     fprintf(fptr, "%c", 'c');
//     fprintf(fptr, "%c", 'd');

//     fclose(fptr);
//     return 0;
// }


// int main(){
//     char ch = 'A';
//     FILE *fptr;
//     fptr = fopen("a.txt","w");
    
//     fprintf(fptr,"%c", ch);
//     fprintf(fptr,"%c", 'p');
//     fprintf(fptr,"%c", 'p');
//     fprintf(fptr,"%c", 'l');
//     fprintf(fptr,"%c", 'e');

//     fclose(fptr);
//     return 0;
// }

// int main(){
    
//     FILE *fptr;
//     fptr = fopen("a.txt","a");

//     fprintf(fptr, "%c", ' ');
//     fprintf(fptr, "%c", 'M');
//     fprintf(fptr, "%c", 'a');
//     fprintf(fptr, "%c", 'n');
//     fprintf(fptr, "%c", 'g');
//     fprintf(fptr, "%c", 'o');

//     fclose(fptr);
//     return 0;
// }

// int main(){
//     FILE *fptr;
//     fptr = fopen("a.txt","r");
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     printf("%c",fgetc(fptr));
//     fclose(fptr);
//     return 0;
// }

// int main(){
//     FILE *fptr;
//     fptr = fopen("b.txt","w");
//     fputc('b',fptr);
//     fclose(fptr);
//     return 0;
// }

// int main(){
//     FILE *fptr;
//     fptr = fopen("a.txt","a");

//     fputc(' ',fptr);
//     fputc('b',fptr);
//     fputc('a',fptr);
//     fputc('t',fptr);

//     fclose(fptr);

//     return 0;
// }

// int main(){
//     char ch;
//     FILE *fptr;

//     fptr = fopen("a.txt","r");
//     ch = fgetc(fptr);
//     for(int i = 0; ch != EOF;i++ ){
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }

//     fclose(fptr);
//     return 0;
// }

// int main(){
//     char ch;
//     FILE *fptr;

//     fptr = fopen("a.txt","r");
//     // ch = fgets(fptr,"%c",ch);

//     while(ch != EOF){
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }

//     fclose(fptr);
//     return 0;
// }

// int main(){
//     FILE *fptr;
//     int num;

//     fptr = fopen("a.txt","r");
//     num = fgetc(fptr);

//     while(num != EOF){
//         printf("%d", num);
//         num = fgetc(fptr);
//     }
//     return 0;
// }
// int main(){
//     FILE *fptr;
//     fptr = fopen("a.txt","r");

//     int n;
//     fscanf(fptr,"%d",&n);
//     printf("%d",n);
//     fscanf(fptr,"%d",&n);
//     printf("%d",n);
//     fscanf(fptr,"%d",&n);
//     printf("%d",n);
//     fscanf(fptr,"%d",&n);
//     printf("%d",n);
//     fscanf(fptr,"%d",&n);
//     printf("%d",n);

//     return 0;
// }

// int main(){
//     FILE *fptr;
//     fptr = fopen("b.txt","w");

//     char name[50];
//     int age;
//     float cgpa;

//     printf("Enter name : ");
//     fgets(name,50,stdin);
//     printf("Enter age : ");
//     scanf("%d",&age);
//     printf("Enter cgpa : ");
//     scanf("%f",&cgpa);

//     fprintf(fptr,"Name : %s\t",name);
//     fprintf(fptr,"Age : %d\t",age);
//     fprintf(fptr,"CGPA : %f\t",cgpa);

//     fclose(fptr);

//     return 0;
// }

// int main(){
//     int n = 20;
//     FILE *fptr;
//     fptr = fopen("c.txt","w");

//     for(int i = 1; i <= n; i++ ){
//         if(i % 2 != 0){
//             fprintf(fptr,"%d ",i);
//         }
//     }

//     fclose(fptr);

//     return 0;
// }

// int main(){
//     int a,b,sum;
//     FILE *fptr;
   
//     fptr = fopen("d.txt","r");
//     fscanf(fptr,"%d",&a);
//     fscanf(fptr,"%d",&b);
//     fclose(fptr);

//     fptr = fopen("d.txt","w");
//     fprintf(fptr,"sum is %d",a + b);
//     fclose(fptr);

//     return 0;
// }
// int main(){
//     FILE *fptr;
//     fptr = fopen("b.txt","r");

//     char ch;
//     do{
//         ch = fgetc(fptr);
//         printf("%c",ch);
//     }while(ch != EOF);

//     fclose(fptr);
//     return 0;
// }

int main(){
    FILE *fptr;
    fptr = fopen("b.txt","r");

    int count = 0;
    char ch;

    do{
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
        ch = fgetc(fptr);
    }while(ch != EOF);

    fclose(fptr);

    fptr = fopen("b.txt","w");
    fprintf(fptr,"%d",count);
    fclose(fptr); 

    return 0;
}