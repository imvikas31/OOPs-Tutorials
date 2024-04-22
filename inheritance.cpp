#include<iostream>
#include<string>
using namespace std;

class Animal{

public:
    string name;
    double age;
    string gender;
    string color;

    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    void eat(){
        cout<<"Eating"<<endl;
    }

    private:
    void legs(){
        cout<<"Has 4 legs"<<endl;
    }

};
//Inheriatance --->>

// 1.Hierarchial Inheritance --->>
class Dog : public Animal{
public:

    Dog(string name,int age,string color){
        cout <<"Dog constructor called"<<endl;
        this->name = name;
        this->age = age;
        this->color = color;
    }
    
    void speak(){
        cout<<"Barking"<<endl;
    }

};
class Cat : public Animal{
public:
    Cat(string name,double age,string color){
        cout <<"Cat constructor called"<<endl;
        this->name = name;
        this->age = age;
        this->color = color;
    }

    void speak(){
        cout<<"Meowing"<<endl;
    }

};


class Resercher{
    public:
    void research(){
        cout<<"Performs Research"<<endl;
    }
};
class Teacher{
    public:
    void teach(){
        cout<<"Performs teaching"<<endl;
    }
};

//Multiple Inheritance --->>
class Professor :public Teacher , public Resercher{
    public:
    void bore(){
        cout<<"Boring"<<endl;
    }
};


int main(){
    // Dog object --->>
    Dog d1("Jakes",1.2,"Brown");
   
    cout<<"Name of the Dog : "<<d1.name<<endl;
    cout<<"Age of the Dog : "<<d1.age<<endl;
    cout<<"Color of the Dog : "<<d1.color<<endl;
    d1.speak();
    d1.eat();

    // Cat Object --->>
    Cat c1("jasmine",0.2,"Grey");
    cout<<"Name of the Cat : "<<c1.name<<endl;
    cout<<"Age of the Cat : "<<c1.age<<endl;
    cout<<"Color of the Cat : "<<c1.color<<endl;
    c1.speak();
    c1.eat();

    Professor p;
    p.teach();
    p.bore();
    p.research();

    return 0;
}