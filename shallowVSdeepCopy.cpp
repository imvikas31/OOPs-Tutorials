#include<iostream>
using namespace std;

class Student{
    public:
    int x;
    int *y;

    Student(int x,int y):x(x),y(new int (y)){}

    void print(int x, int y)const{
        cout<<"X : "<<x<<end;
        cout<<"PTR y : "<<y<<end;
        cout<<"Content of y(*y) : "<<*y<<end;
    }
};
int main(){

    Student s1;
    // s1.print(1,2);

    return 0;
}