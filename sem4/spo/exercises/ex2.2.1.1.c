
typedef struct student{
    char[] name;
    int age;
    float gpa;
    char[] grade_level;
}student;

int main(void){
    student[1] students;

    students[0].name = "Alexander\0";
    students[0].age = 23;
    students[0].gpa = 4.0;
    students[0].grade_level = "freshman";
}





