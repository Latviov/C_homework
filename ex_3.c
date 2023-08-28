#include <stdio.h>

int main() {
    int num_students;
    printf("Enter the number of students: \n");
    scanf("%d", &num_students);

    int grades[num_students];
    for (int i = 0; i < num_students; i++) {
        grades[i] = -1;
    }

    int student_number = 1;
    while (1) {
        int student_input;
        printf("Enter student number (1 - %d) or 0 to stop: \n", num_students);
        scanf("%d", &student_input);

        if (student_input == 0) {
            break;
        }

        if (1 <= student_input && student_input <= num_students) {
            int grade;
            printf("Enter grade for student %d (0 - 5) or -1 for N/A: \n", student_input);
            scanf("%d", &grade);

            if (0 <= grade && grade <= 5) {
                grades[student_input - 1] = grade;
            }
        }
    }

    printf("\nStudent\t\tGrade\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d\t\t", i + 1);
        if (grades[i] == -1) {
            printf("N/A\n");
        } else {
            printf("%d\n", grades[i]);
        }
    }

    return 0;
}
