/*
1) 


*/





#include <iostream>
using namespace std;

class Animal
{
    public:
        int Animal_age;
        Animal(int age)
        {
           Animal_age = age;
        }

        void getanimalage()
        {
            std::cout << Animal_age;
        }

};

class Cat : public Animal
{
    public :
            int height;
            Cat(int age, int height):Animal(age), height(height)
            {

            }
            void doublecatage()
            {
             std::cout << 2*Animal_age << "\n";
            }
};

class Dog : public Animal
{
    public :
            int height;
            Dog(int age, int height):Animal(age), height(height)
            {

            }
            void doubledogage()
            {
             std::cout << 2*Animal_age << "\n";
            }
};


int main()
{
    Cat c(5, 23.7);
    c.doublecatage();
    Dog d(10, 15.6);
    d.doubledogage();
}


