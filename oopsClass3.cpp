#include<iostream>
using namespace std;

class Animal{

    public:
    void sound()
    {
        cout<<"Animal making sound"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void sound(){
        cout<<"Dogs are Barking"<<endl;
    }
};
class Cat : public Animal
{
    public:
    void sound(){
        cout<<"Cats are mewing"<<endl;
    }
};

void sound(Animal *animal){
    animal->sound();
}

int main(){

    Animal *animal  = new Dog();   // up-casting
    sound(animal);

    animal = new Cat();
    sound(animal);

    return 0;
}