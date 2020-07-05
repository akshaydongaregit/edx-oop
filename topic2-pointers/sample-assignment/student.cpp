#include <string>
#include <stdlib.h>

using namespace std;

struct  student {
    string name;
    int age;
    float marks;
};



student* initiateStudent(string name,int age,float marks) {
    struct student * s = (student *) malloc(sizeof(student));
    s->name = name;
    s->age = age;
    s->marks = marks;
    
    return s;
}

student* highestScorer(student **stud,int totalStudents) {
    struct student * s = (student *) malloc(sizeof(student));
    s->marks = 0;
    int topper = 0;
    
    for(int i=0;i<totalStudents;i++){
        if(stud[topper]->marks < stud[i]->marks ){
            topper = i;
        }    
    }
    
    return stud[topper];
}
