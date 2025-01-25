#include<stdio.h>
#include<string.h>

// // User Defined
// struct Person {
//     char name[100];
//     int age;
//     char email[50];
// };

// int main(){
//     struct Person p1;

//     char name[] = "Rahul Negi";
//     char email[] = "rahul@gmail.com";
//     strcpy(p1.name,name);
//     p1.age = 25;
//     strcpy(p1.email,email);
//     printf("name : %s, age : %d, email : %s",p1.name, p1.age, p1.email);

//     return 0;
// }
// #include<stdio.h>
// #include<string.h>

// struct Student {
//     char name[100];
//     int rollno;
//     float cgpa;
// };

// int main(){
//     struct Student s1;

//     char name[100];    
//     int rollno = 0;    
//     float cgpa = 0.00;    

//     printf("Enter student name : ");
//     fgets(name,100,stdin);
//     printf("Enter student rollno : ");
//     scanf("%d",&rollno);
//     printf("Enter student cgpa : ");
//     scanf("%f",&cgpa);

//     strcpy(s1.name, name);
//     s1.rollno = rollno;
//     s1.cgpa = cgpa;


//     printf("name : %s, rollno : %d, cgpa : %f",s1.name, s1.rollno, s1.cgpa);

//     return 0;
// }

// struct student {
//     char name[100];
//     int rollno;
//     float cgpa;
// };

// int main(){
//     struct student civil[10];
//     char name1[] = "Sandeep Negi";
//     char name2[] = "Ajay Verma";
    
//     strcpy(civil[0].name, name1);
//     civil[0].rollno = 101;
//     civil[0].cgpa = 9.8;

//     strcpy(civil[1].name, name2);
//     civil[1].rollno = 102;
//     civil[1].cgpa = 8.5;

//     printf("name : %s, rollno : %d, cgpa : %f\n",civil[0].name, civil[0].rollno, civil[0].cgpa);
//     printf("name : %s, rollno : %d, cgpa : %f\n",civil[1].name, civil[1].rollno, civil[1].cgpa);
    
// }

// struct person {
//     char name[100];
//     int age;
// };

// // (*ptr).rollno      ptr->rollno
// int main(){
//     struct person p1 = {"Rahul Negi", 25};
//     printf("%s\n",p1.name);
//     printf("%d\n",p1.age);

//     struct person *ptr;

//     ptr = &p1;
//     printf("%d\n",(*ptr).age);
//     printf("%d\n", ptr->age);

//     return 0;
// }

// typedef struct Vector{
//     int x;
//     int y;
// } vec;

// void sumVector(vec *v1,vec *v2, vec *sum);

// int main(){
//     vec vectorA = { 23 , 45};
//     vec vectorB = { 12 , 43};

//     vec sum_of_A_B = { 0 }; //{ 0, 0}

//     sumVector(&vectorA, &vectorB, &sum_of_A_B);

//     printf("sum of vector on x axis : %d\n", sum_of_A_B.x);
//     printf("sum of vector on y axis : %d\n", sum_of_A_B.y);

//     return 0;
// }

// void sumVector(vec *v1,vec *v2, vec *sum){
//     (*sum).x = (*v1).x + (*v2).x;
//     sum->y = v1->y + v2->y;
// }

typedef struct Student {
    char name[100];
    int age;
    float marks;
} stu;

void printAllStudents(stu students[]);

int main(){

    int userChoice = 0;
    stu students[10] = {0, 0 , 0};
    int studentIndex = 0;
    char userInputName[100];
    int userInputAge;
    float userInputMarks;
    
    while(userChoice != 3){
        printf("------------------------------\n");
        printf("Select number : \n");
        printf("1 for add a student : \n");
        printf("2 for see all students : \n");
        printf("3 for exit the loop : \n");
        scanf("%d",&userChoice);
        switch(userChoice){
            case 1:
                printf("Enter name : \n");
                scanf("%s", userInputName);
                printf("Enter age : \n");
                scanf("%d", &userInputAge);
                printf("Enter marks : \n");
                scanf("%f", &userInputMarks);
                strcpy(students[studentIndex].name, userInputName);
                students[studentIndex].age = userInputAge;
                students[studentIndex].marks = userInputMarks;
                printf("Student added : \n");
                studentIndex++;
                continue;
            case 2:
                printAllStudents(students);
                continue;
            case 3:
                printf("Good Bye.\n");
                break;
            default:
                printf("choose number.\n");
                continue;
        }
    }

    return 0;
}

void printAllStudents(stu students[]){
    for(int i = 0; students[i].name != ""; i++){
        printf("student name : %s, age : %d, marks : %f\n",students[i].name, students[i].age,students[i].marks);
    }
}