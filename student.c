include <stdio.h>
int main()
{#
    int roll;
    char name[100], sub1[100], sub2[100], sub3[100];
    float m1, m2, m3, total, avg;
    char gread;
    FILE *fp;

    fp = fopen("Result.txt", "W");

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

    fprintf(fp,"\n---------------------Result----------");
    fprintf(fp,"\nRoll Number :%d", roll);
    fprintf(fp,"\nnName :%s", name);
    fprintf(fp,"\nSubject 1 :%s", sub1);
    fprintf(fp,"\nmarks of suject 1 :%f", m1);
    fprintf(fp,"\nSubject 2 :%s", sub2);
    fprintf(fp,"\nmarks of suject 2 :%f", m1);
    fprintf(fp,"\nSubject 3 :%s", sub3);
    fprintf(fp,"\nmarks of suject 3 :%f", m1);
    fprintf(fp,"\n total:%f", total);
    fprintf(fp,"\n avg:%f", avg);
    fprintf(fp,"\n gread:%c", gread);
}