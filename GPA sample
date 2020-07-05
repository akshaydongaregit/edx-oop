#include <string>
#include <iostream>
using namespace std;

struct  student {
    string name;
    int age;
    float marks;
};



student* initiateStudent(string name,int age,float marks) {
  
   student * s = new student[3];
   s->name =name;
   s->age =age;
   s->marks=marks;
   return s;
    
}

student* highestScorer(student **stud,int totalStudents) {
    for(int i=0;i<totalStudents;i++){
    cout << stud[i]->marks; 
    if(stud[0]->marks < stud[i]->marks)
          stud[0]->marks = stud[i]->marks;
    }
   return stud[0];
}
