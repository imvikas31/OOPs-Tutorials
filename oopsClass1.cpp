#include<iostream>
using namespace std;

//Padding in c++ --->> addition extra bytes to proper alignment of data members of structure or class.

#pragma pack(push, 1)
class Children{
    int age;
    int DOB;
    bool status;
};
#pragma pack(pop)

class Student{
    // public:
    // string name;
    int age;
    int rollNo;
    // int nos;
    bool status;

    void study(){
        // int adm_No;
        cout <<"Studying"<<endl;
    }
    // void sleep(){
    //     cout <<"sleeping"<<endl;
    // }
    // void Bunk(){
    //     cout <<"Bunking"<<endl;
    // }
};

int main(){

    cout <<"Size of Student(currently empty) class width padding : "<<sizeof(Student) <<endl;

    cout <<"Size of Children(currently empty) class without padding : "<<sizeof(Children);

    // Student s1;
    // Student s2;
    // s1.name = "vikas";
    // s2.name = "saurabh";
    // cout<<s1.name;

    
    return 0;
}