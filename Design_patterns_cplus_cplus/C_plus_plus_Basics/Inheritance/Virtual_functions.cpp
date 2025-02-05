/*

 1) A virtual function is a special type of function that, when called, resolve most-derived version of function that exists between
    Base and  Derived class This is called polymorphism. To make the function as virtual place virtual keyword before function 
    declaration.
 2) A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined 
    (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you 
    can call a virtual function for that object and execute the derived class’s version of the method.
 3) virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used 
    for the function call.
 4) They are mainly used to achieve Runtime polymorphism.
 5) Functions are declared with a virtual keyword in a base class.
 6) The resolving of a function call is done at runtime.



The rules for the virtual functions in C++ are as follows:

 1) Virtual functions cannot be static.
 2) A virtual function can be a friend function of another class.
 3) Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
 4) The prototype of virtual functions should be the same in the base as well as the derived class.
 5) They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override 
    (or re-define the virtual function), in that case, the base class version of the function is used.
 6) A class may have a virtual destructor but it cannot have a virtual constructor.


*/


#include <iostream>
class A
{
    public :
             virtual const char* getname(){
                return "A";
             }
};

class B: public A
{
     public :
             virtual const char* getname(){
                return "B";
             }
};

class C: public B
{
     public :
             virtual const char* getname(){
                return "C";
             }
};

class D: public C
{
     public :
             virtual const char* getname(){
                return "D";
             }
};

int main()
{
    C c;
    A &a_base = c;
    std:: cout << "a_base is a " << a_base.getname() << "\n";
}