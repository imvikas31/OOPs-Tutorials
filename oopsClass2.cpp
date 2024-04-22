#include<iostream>
using namespace std;

class Student{
    
private:
    string gf;

public:
    string name;
    int age;
    int rollNo;
    int nos;
    bool status;
    string frnd;

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
        this->gf = gf;
        
    }

    // Copy Constructor --->>
    Student(const Student &s1 , string frnd ){
        cout<<"copy constructor called"<<endl;
        this->name = s1.name;
        this->age = s1.age;
        this->rollNo = s1.rollNo;
        this->nos = s1.nos;
        this->status = s1.status;
        this->frnd = frnd;
        
        
    }

    ~Student(){
        cout<<"Destructor called!!"<<endl;
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


    void gfChantting(){
        cout<<"Chatting"<<endl;
    }


    string getGF(){
        return this->gf;
    }

    void setGF(string gf){
        this->gf = gf;
    }
};

int main(){

    //S1 - Student  (created on Stack)
    Student s1("Vikas Singh" , 21,552212 , 5 , true);

    cout<<"Name of first student : "<<s1.name<<endl;
    cout<<"Age of first student : "<<s1.age<<endl;
    cout<<"Roll No of first student : "<<s1.rollNo<<endl;
    cout<<"Number of subjects of first student : "<<s1.nos<<endl;
    cout<<"Status(attendence {1 -> present & 0 -> absent}) of first student : "<<s1.status<<endl;

    cout<<endl;

    // S2 - Student  (created on Heap uisng new keyword)

    {
        Student *s2 =  new Student("Saurabh Singh" , 20 , 66338813 , 7 , false);
    }
  
    // cout<<"Name of second student : "<<s2->name<<endl;
    // cout<<"Age of second student : "<<s2->age<<endl;
    // cout<<"Roll No of second student : "<<s2->rollNo<<endl;
    // cout<<"Number of subjects of second student : "<<s2->nos<<endl;
    // cout<<"Status(attendence {1 -> present & 0 -> absent}) of first student : "<<s2->status<<endl;

    // delete s2;

// Copy constructor --->> creating s3 object using s1 object of the same class --->>
    Student s3(s1,"Aayush Singh");
    cout<<"Name of second student : "<<s3.name<<endl;
    cout<<"Age of second student : "<<s3.age<<endl;
    cout<<"Roll No of second student : "<<s3.rollNo<<endl;
    cout<<"Number of subjects of second student : "<<s3.nos<<endl;
    cout<<"Status(attendence {1 -> present & 0 -> absent}) of first student : "<<s3.status<<endl;
    cout<< "Friend of third student is : "<<s3.frnd<<endl;
 



    return 0;
}