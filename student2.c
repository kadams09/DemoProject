#include<stdio.h>
int main()
{ 
    int roll;
    char name[100], sub1[100], sub2[100], sub3[100];
    float m1, m2, m3, total, avg;
    char gread;

    printf("Enter the student  details:");
    printf("n Roll Number:");
    scanf("%d", &roll);
    printf("Name:");
    scanf("%s", &name);
    printf("subject1");
    scanf("%s", &sub1);
    printf("subject2:");
    scanf("%s", &sub2);
    printf("subject3:");
    scanf("%s", &sub3);
    printf("marks of subject 1 :");
    scanf("%f", &m1);
    printf("marks of subject 2 :");
    scanf("%f", &m2);
    printf("marks of subject 3 :");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    avg = total / 3;
    if (avg <= 100 && avg >= 80)
        gread = 'O';
    if (avg <= 90 && avg >= 85)
        gread = 'A';
    if (avg <= 70 && avg >= 50)
        gread = 'B';
    if (avg <= 95 && avg >= 65)
        gread = 'C';
    if (avg <= 100 && avg >= 80)
        gread = 'D';
    if (avg <= 75 && avg >= 40)
        gread = 'E';
        else
        gread = 'F';   
    printf("\n---------------------Result----------");
    printf("\nRoll Number :%d", roll);
    printf("\nnName :%s", name);
    printf("\nSubject 1 :%s", sub1);
    printf("\nmarks of suject 1 :%f", m1);
    printf("\nSubject 2 :%s", sub2);
    printf("\nmarks of suject 2 :%f", m1);
    printf("\nSubject 3 :%s", sub3);
    printf("\nmarks of suject 3 :%f", m1);
    printf("\n total: %f", total);
    printf("\n avg : %f", avg);
    printf("\n gread: %c", gread);
}