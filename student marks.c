//Student marks program
#include<stdio.h>
int main()
{
struct stud
{
int roll_no;
char name[20];
char section[10];
char department[20];
float fee;
float result;
}
stud1,stud2;
printf("Enter the student 1 details : ");
scanf("%d %s %s %s %f %f",&stud1.roll_no,stud1.name,stud1.section,stud1.department,&stud1.fee,&stud1.result);
printf("Enter the student 2 details : ");
scanf("%d %s %s %s %f %f",&stud2.roll_no,stud2.name,stud2.section,stud2.department,&stud2.fee,&stud2.result);
if(stud1.result>stud2.result)
{
printf("Student 1 has better result\n");
printf("Details :\n Roll NO:%d \n Name:%s \n SECTION:%s \n DEPARTMENT:%s \n FEES:%f \n RESULT:%f ",stud1.roll_no,stud1.name,stud1.section,stud1.department,stud1.fee,stud1.result);
}
else
{
printf("Student 2 has better result\n");
printf("Details :\n Roll NO:%d \n Name:%s \n SECTION:%s \n DEPARTMENT:%s \n FEES:%f \n RESULT:%f ",stud2.roll_no,stud2.name,stud2.section,stud2.department,stud2.fee,stud2.result);
}
return 0;
}
