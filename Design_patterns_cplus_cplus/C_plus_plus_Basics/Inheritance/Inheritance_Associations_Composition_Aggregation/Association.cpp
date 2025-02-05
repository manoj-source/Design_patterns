/*

1) Association in C++ is a relationship between two classes where one class uses the functionalities provided by the other class. 
   In other words, an association represents the connection or link between two classes. In an association, one class instance is 
   connected to one or more instances of another class.

2) Association is a relationship between two classes that defines a connection or a link between them. The association can be 
   bi-directional, meaning that both classes can use each other’s methods and properties, or uni-directional, where only one class can 
   use the methods and properties of the other. The relationship can be of any type, such as a one-to-one, one-to-many, or many-to-many.
   For example, a Customer class might be associated with an Order class, where each customer can have multiple orders.

3) Association is type "USE-A" relationship.

*/


class Bank {
public:
    void transferMoney(Account* fromAccount, Account* toAccount, double amount) {
        // Code to transfer money from one account to another
    }
};

class Account {
public:
    Account(int id, double balance) : id(id), balance(balance) {}
    int getId() { return id; }
    double getBalance() { return balance; }
private:
    int id;
    double balance;
};

int main() {
    Account* account1 = new Account(123, 1000.00)
    Account* account2 = new Account(456, 500.00);
    Bank bank;
    bank.transferMoney(account1, account2, 250.00);
    return 0;
}

/*
   1) In this example, we have two classes: Bank and Account. 
      Bank class has a transferMoney() method that takes two Account objects and a double value representing the amount of money to be 
      transferred from one account to another. Bank class is associated with the Account class, meaning that it has a connection or a 
      link to the Account class.
    
    2) In the main() function, we create two Account objects with different IDs and balances, and then we create an instance of the 
       Bank class. We then call the transferMoney() method of the Bank class and pass it the two Account objects and the amount of 
       money to be transferred.

    3) As we can see, the Bank class has a direct association with the Account class because it uses objects of the Account class as 
       parameters in its method.

*/

