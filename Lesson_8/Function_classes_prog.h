#include <iostream>

//main.h 
using namespace std;

class Student
{
    private:
    int studentID;
    int grades[10];
    public:
void setStudentID(int inID)
    {
        studentID = inID;
    }
int getGrade(int index){
    return grades[index];
}    
    
void setGrade(int index, int grade){
    grades[index] = grade;
}

void printGrades(){
    for(int index = 0; index < 10;index++){
        cout<<grades[index];
    }
}

int sortGrades(){
int change = 0;
for(int i = 0; i<10;i++){
    for(int j = 0;j<9-i;j++){
        if(grades[j]>grades[j+1]){
        change = grades[j];
        grades[j] = grades[j+1];
        grades[j+1] = change;
        }
    }
}
}

int getMin(){
   sortGrades();
   return grades[0];
}

int getMax(){
    sortGrades();
    return grades[9];
}
float getAverageGrade(){
    float sum = 0;
    for(int index = 0;index<10;index++){
        float add = (float)grades[index]; 
        sum += add;
    }
    return sum/10;
}    
};

//********************
class CourseEnrollment
{
    public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];

void addStudents(Student *stude){
    for(int index = 0;index<6;index++){
        students[index] = stude[index];
    }
}

int *getAllGrades(){
    int grades_index = 0;
    for(int index = 0; index<6;index++){
        for(int grade = 0;grade < 10;grade++){
            grades[grades_index] = students[index].getGrade(grade);
            ++grades_index;
        }
    }
    return grades;
}
int *sortAllGrades(){
    int change;
    for(int index_1= 0;index_1<60;index_1++){
        for(int index_2 = 0;index_2<59-index_1;index_2++){
            if(grades[index_2]>grades[index_2+1]){
                change = grades[index_2+1];
                grades[index_2+1] = grades[index_2];
                grades[index_2] = change;
            }
        }
    }
    return grades;
}
int getMinGrade(){
    sortAllGrades();
    return grades[0];
}
int getMaxGrade(){
    sortAllGrades();
    return grades[59];
}
float getAvgGrade(){
float sum = 0;
for(int index = 0; index <60;index++){
    float add = (float)grades[index];
    sum += add;
}
return sum/60;
}
};

