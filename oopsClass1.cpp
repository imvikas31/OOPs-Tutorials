#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Padding in c++ --->> addition extra bytes to proper alignment of data members of structure or class.

#pragma pack(push, 1)
class Children{
    string name;
    int age;
    int rollNo;
    int nos;
    bool status;
};
#pragma pack(pop)

class Student{
    
private:
    string gf;

public:
    string name;
    int age;
    int rollNo;
    int nos;
    bool status;

    //Default Constructor --->>
    Student(){
        cout<<"Default constructor called"<<endl;

    }
    // Parameterized Constructor --->>
    Student(string _name , int _age , int _rollno , int _nos , bool _status){
        cout<<"Parameterized constructor called"<<endl;
        this->name = _name;
        this->age = _age;
        this->rollNo = _rollno;
        this->nos = _nos;
        this->status = _status;
        
    }

    void study(){
        // int adm_No;
        cout <<"Studying"<<endl;
    }
    
    void sleep(){
        cout <<"sleeping"<<endl;
    }

    void Bunk(){
        cout <<"Bunking"<<endl;
    }

private:
    void gfChantting(){
        cout<<"Chatting"<<endl;
    }
};

int main(){

    cout <<"Size of Student(currently empty) class width padding : "<<sizeof(Student) <<endl;

    cout <<"Size of Children(currently empty) class without padding : "<<sizeof(Children)<<endl;

    cout<<endl;

    //S1 - Student  (created on Stack)
    Student s1("Vikas Singh" , 21,552212 , 5 , true);

    // s1.name = "Vikas Singh";
    // s1.age = 21;
    // s1.rollNo = 552212;
    // s1.nos = 5;
    // s1.status = true;

    cout<<"Name of first student : "<<s1.name<<endl;
    cout<<"Age of first student : "<<s1.age<<endl;
    cout<<"Roll No of first student : "<<s1.rollNo<<endl;
    cout<<"Number of subjects of first student : "<<s1.nos<<endl;
    cout<<"Status(attendence {1 -> present & 0 -> absent}) of first student : "<<s1.status<<endl;

    cout<<endl;

    // S2 - Student  (created on Heap uisng new keyword)
    Student *s2 =  new Student("Saurabh Singh" , 20 , 66338813 , 7 , false);

    // s2.name = "Saurabh Singh";
    // s2.age = 22;
    // s2.rollNo = 663323;
    // s2.nos = 7;
    // s2.status = false;

  
    cout<<"Name of second student : "<<s2->name<<endl;
    cout<<"Age of second student : "<<s2->age<<endl;
    cout<<"Roll No of second student : "<<s2->rollNo<<endl;
    cout<<"Number of subjects of second student : "<<s2->nos<<endl;
    cout<<"Status(attendence {1 -> present & 0 -> absent}) of first student : "<<s2->status<<endl;

    delete s2;

    
    return 0;
}