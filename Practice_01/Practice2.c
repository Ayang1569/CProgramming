#include <stdio.h>

int main(void) {
    int course_id = 2271;
    int student_id = 10234;

    // Print results
    puts("Name:\t\t\t\tJohn Doe");
    printf("Course ID:\t\t\t%d\n", course_id);
    printf("Student ID:\t\t\t%d\n", student_id);
    printf("Student ID - Course ID is:\t%d\n", student_id - course_id);

    return 0;
}