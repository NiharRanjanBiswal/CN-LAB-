//WAP IN C PROGRAM  TO USING VALUES TO EACH MEMBERS  OF A FOLLOWING  STRUCTURES PASS THE STRUCTURE TO A FUNCTION USING CALL BY VALUE  AND ANOTHER FUNCTION USING CALL BY REFERENCE AND DISPLAY VALUE OF EACH MEMBERS
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
    float cgpa;
    int dob;
};
void display(struct student s)
{
    printf("name=%s\n",s.name);
    printf("rollno=%d\n",s.rollno);
    printf("marks=%f\n",s.marks);
    printf("cgpa = %f\n",s.cgpa);
    printf("dob = %d\n",s.dob);
}

void display1(struct student *s)
{
    printf("name=%s\n",s->name);
    printf("rollno=%d\n",s->rollno);
    printf("marks=%f\n",s->marks);
    printf("cgpa = %f\n",s->cgpa);
    printf("dob = %d\n",s->dob);
}
int main()
{
    struct student s1={"nihar",1,99.9,  9.9,  2001};
    display(s1);
    return 0;
}