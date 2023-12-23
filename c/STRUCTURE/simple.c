#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct info                                             // user defined data type
    {
        int id;
        int marks;
    }student1;                                            // declare variable student1 of info structure.

    student1.id = 1;
    student1.marks = 99;

    printf("student1 id=%d\n", student1.id);
    printf("student1 marks=%d\n", student1.marks);

    struct info student2;                                 // declare variable student2 of info structure.

    printf("enter the id and marks : ");
    scanf("%d", &student2.id);
    scanf("%d", &student2.marks);
    printf("student2 id=%d\n", student2.id);
    printf("student2 marks=%d\n", student2.marks);

    return 0;
}
