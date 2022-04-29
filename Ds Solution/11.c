#include <stdio.h>
struct student {
    char Name[50];
    int roll,sem;
    float cpi;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    for (i = 0; i < 5; ++i) {
        printf("\nFor student %d,\n", i + 1);
        printf("Enter Enrollment_no : ");
        scanf("%d",&s[i].roll);
        printf("Enter Name : ");
        scanf("%s", s[i].Name);
        printf("Enter Sem : ");
        scanf("%d", &s[i].sem);
        printf("Enter CPI : ");
        scanf("%f", &s[i].cpi);
        
    }
    
    printf("\n\n\nDisplaying Information:\n\n");
    for (i = 0; i < 5; ++i) 
    {
        printf("\n\nFor student %d,\n", i+1);
        printf("\nEnrollment_no : %d",s[i].roll);
        printf("\nName : %s",s[i].Name);
        printf("\nSem : %d",s[i].sem);
        printf("\nCPI: %.1f", s[i].cpi);
        printf("\n");
    }
    return 0;
}
