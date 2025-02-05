/*

    1) Composition is a relationship between two classes in which one class, known as the composite class, contains an object of another
       class, known as the component class, as a member variable.

    2) The composite class owns the component class, and the component class cannot exist independently of the composite class. In other
       words, the lifetime of the component class is controlled by the composite class.

    3) Composition is a relationship between two classes where one class is composed of one or more instances of the other class. 
       The composed class is typically an essential part of the composite class, and if the composite class is destroyed, the composed 
       class will also be destroyed. For example, a House class might be composed of a Room class, where the Room class cannot exist 
       without the House class.

    4) Composition is type of "HAS-A" relationship.
*/

using namespace std;
# include  <iostream>
class Engine {
public:
    void start() {
        std:: cout << "Code to start the engine";
    }
};

class Car {
public:
    Car() : engine(new Engine()) {}
    void startCar() {
        engine->start();
    }
private:
    Engine* engine;
};

int main() {
    Car car;
    car.startCar();
    return 0;
}


/*

1) In this example, we have two classes: Engine and Car. The Car class is composed of an Engine object. The Engine object is an 
   essential part of the Car object, and if the Car object is destroyed, the Engine object will also be destroyed.

2) In the Car class constructor, we create a new instance of the Engine class and store it in a pointer variable named engine. 
   We then provide a method named startCar() in the Car class, which calls the start() method of the Engine object stored in the 
   engine pointer.

3) In the main() function, we create a new instance of the Car class and call the startCar() method to start the car. As we can see, 
   the Car class is composed of an Engine object, and the startCar() method of the Car class uses the Engine object to start the car.

*/