#include<iostream>
using namespace std;
class Student{
public:
    int Student_Id;
    float CGPA;
    void SetData(int id,float course_1_gpa, float course_2_gpa, float course_3_gpa){
        Student_Id = id;
        CGPA = (course_1_gpa + course_2_gpa + course_3_gpa)/3;
    }
};
int main()
{
    cout<<"Number of Students: ";
    int Student_Number;
    cin>>Student_Number;
    Student students[Student_Number];
    int id;
    float course_1_gpa, course_2_gpa, course_3_gpa;
    for(int i=0;i<Student_Number;i++){
        cout<<"\nStudent Id: ";;
        cin>>id;
        cout<<"Course 1: ";
        cin>>course_1_gpa;
        cout<<"Course 2: ";
        cin>>course_2_gpa;
        cout<<"Course 3: ";
        cin>>course_3_gpa;
        students[i].SetData(id,course_1_gpa, course_2_gpa, course_3_gpa);
    }

     cout<<"\nEnter the Student ID:";
     int ResultId;
     cin>>ResultId;
     for(int i=0;i<Student_Number;i++){
        if(students[i].Student_Id == ResultId){
            cout<<"\n\nCGPA of Student ID "<<ResultId<<" is "<<students[i].CGPA<<endl;
            cout<<"Merit position: "<<i+1;
        }
    }
}





