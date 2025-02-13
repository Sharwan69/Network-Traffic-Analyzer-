#include<stdio.h>
struct student {
    char name [50];
    int roll; 
    float marks;
};
int main(){
    struct student s;

    printf("Enter the name");
    scanf("%s", s.name);

    printf("Enter roll number");
    scanf("%d", &s.roll);

    printf("Enter marks:");
    scanf("%f",&s.marks);

    printf("\nStudent Details:\n");
    printf("Name:%s\n",s.name);
    printf("Name:%d\n",s.roll);
    printf("Marks:%.2f\n",s.marks);
  
    return 0;
}