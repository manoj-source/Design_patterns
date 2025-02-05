/*
    1) Abstract classes are the classes which has pure vitual functions and normal functions.
    2) pure virtual functions are functions that assign to zero.
    3) We cant initiate abstract class.
    4) A pure virtual function is useful when we have a function that we want to put in base class, but only derived class
       knowns what it should return. 
    5) A pure virtual function make it so that base class cnnot be initiatd and the derived class are forced to define these 
       functions before they are initiated. This help to ensure that derived class do not forgot to redrfine functions that 
       the base class was expecting them to.
*/
#include <iostream>
class Test {
    public:
            int x;
            virtual void show() = 0;
            int get_x() {
                return x;
            }
};

class Exam: public Test {
    public :
             void set_x(int value)
             {
                   x = value;
             }
             void show(){
                std :: cout << x;
             }
};

int main()
{
  //  Test t;                We cannot initiated the abstract class.
  Exam e;
  e.set_x(10);
  e.show();
}









