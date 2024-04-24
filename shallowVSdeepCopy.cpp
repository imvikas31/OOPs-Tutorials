#include<iostream>
using namespace std;

class Student{
    public:
    int x;
    int *y;

    Student(int x,int y):x(x),y(new int (y)){}

    void print()const{
        
    }
};


int main(){

    Student s1;
    // s1.print(1,2);

    return 0;
}