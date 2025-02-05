# include  <iostream>
class Ianimal
{
    public :
             virtual int getage() = 0;
};

class Dog : public Ianimal
{
   public :
             int getage()
             {
                return 100;
             }
};

class Cat : public Ianimal
{
   public :
             int getage()
             {
                return 10;
             }
};

class rat : public Ianimal
{
   public :
             int getage()
             {
                return 1;
             }
};

void printage(Ianimal *animalinterface)
{
    std :: cout << animalinterface->getage();
}

int main()
{
    Dog d;
    printage(&d);
    std :: cout << "\n";
    Cat c;
    printage(&c);
    std :: cout << "\n";
    rat r;
    printage(&r);
}