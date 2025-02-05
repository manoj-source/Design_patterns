/*


 1) Aggregation is type "HAS-A" Relationship.

 2) Aggregation is a relationship between two classes in which one class, known as the aggregate class, contains a pointer or reference 
    to an object of another class, known as the component class. The component class can exist independently of the aggregate class, and
    it can be shared by multiple aggregate classes. In other words, the lifetime of the component class is not controlled by the 
    aggregate class.

 3) Aggregation is similar to composition in that it represents a relationship between two classes where one class is composed of one 
    or more instances of the other class. However, in aggregation, the composed class is not an essential part of the composite class, 
    and it can exist independently. For example, a University class might have an aggregation relationship with a Student class, where 
    the Student class can exist independently of the University class. 

    
*/

class Person {
public:
    Person(std::string name) : name(name), address(nullptr) {}
    void setAddress(Address* address) {
        this->address = address;
    }
private:
    std::string name;
    Address* address;
};

class Address {
public:
    Address(std::string street, std::string city, std::string state, std::string zip)
        : street(street), city(city), state(state), zip(zip) {}
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;
};

int main() {
    Address* address = new Address("123 Main St.", "Anytown", "CA", "12345");
    Person person("John Doe");
    person.setAddress(address);
    return 0;
}

/*

1) In this example, we have two classes: Person and Address. The Person class has a member variable named address, which is a pointer to
   an Address object. The Address object is not an essential part of the Person object, and if the Person object is destroyed, the 
   Address object will not be destroyed.

2) In the main() function, we create a new Address object and store it in a pointer variable named address. We then create a new 
   instance of the Person class and pass it the name “John Doe”. We then call the setAddress() method of the Person class and pass it 
   the address pointer. This sets the address of the Person object to the address object we created earlier.

3) As we can see, the Person class has an aggregation relationship with the Address class because the Person object contains a pointer 
   to the Address object, but the Address object is not an essential part of the Person object.

*/


