#include<iostream>
using namespace std;

// class abc{

//     public:
//     int x;
//     int *y;

//     abc(){
//         x = 0;
//         y = new int(0);
//     }

//     int getX() const
//     {
//         x = 10;  //gives error
//         return x;
//     }

//     void setX(int val){
//         x = val;
//     }

//     int getY() const
//     {
//         int f = 50;
//         y = &f; //gives error
//         return *y;
//     }

//     void setY(int val){
//         *y = val;
//     }

// };

// int main(){

//     abc a1;
//     cout<<a1.getX()<<endl;
//     cout<<a1.getY()<<endl;
//     return 0;

// }


int main(){

    const double PI  = 3.14;  //immutable variable (read-only variable)
    // PI = 3.12;  //can not be re-declared as it is constant(read-only variable)
    // cout<<PI<<endl;

// Const keyword with Pointers --->>

    // Case:1-->> const data with non-const pointer --->> when the 'const' keyword is used before the "*"symboll that means the data/content stored at the memory location will constant but the pointer will be non-constant
        cout<<"Case:1-->> const data with non-const pointer --->>"<<endl;


        const int *a = new int(10);   // it can be written as int const *a = new int(10);
        //*a = 10; // data stored in "a" variable is constant but pointer is non-constant.

        cout<<" Before Address Value of a is : " <<a<<endl;
        cout<<" Before Value of a is : " <<*a<<endl;

        int b = 5;
        a = &b;

        cout<<" After Address Value of a is : " <<a<<endl;
        cout<<" After Value of a is : " <<*a<<endl;

        cout<<endl;

    // Case:2-->> non-const data with const pointer --->>  when the 'const' keyword is used after the "*" symboll that means the data/content stored at the memory location is non-constant but the pointer is constant
        cout<<"Case:2-->> non-const data with const pointer --->>"<<endl;
        
        int *const x = new int(10); 
    
        cout<<" Before Address Value of x is : " <<x<<endl;
        cout<<" Before Value of x is : " <<*x<<endl;

        *x = 100; // data stored in "a" variable is non-constant but pointer is constant.
        int y = 5;
        // x = &y;   //pointer is constant 

        cout<<" After Address Value of x is : " <<x<<endl;
        cout<<" After Value of x is : " <<*x<<endl;

        cout<<endl;

    // Case:3-->> const data with const pointer --->>  when the 'const' keyword is used both before and after the "*" symboll that means both the data/content stored at the memory location and the pointer is constant
        cout<<"Case:3-->> const data with const pointer --->>"<<endl;
        
        const int *const p = new int(1);
    
        cout<<" Before Address Value of p is : " <<p<<endl;
        cout<<" Before Value of p is : " <<*p<<endl;

        // *p = 10; // data stored in "a" variable is constant  pointer is also constant.
        int q = 5;
        // p = &q;   //pointer is constant 

        cout<<" After Address Value of p is : " <<p<<endl;
        cout<<" After Value of p is : " <<*p<<endl;



    return 0;

}