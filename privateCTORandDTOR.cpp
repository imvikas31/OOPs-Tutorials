#include<iostream>
using namespace std;

class Box {
    private:
    int width;

    // public:
    Box(int width) : width(width){};

    public:
    int getWidth() const
    {
        return this->width;
    }
    void setWidth(int width)
    {
        this->width = width;
    }

};

int main(){

    // Box b1(5);
    // cout << b1.getWidth();

    return 0;
}