#include <iostream>
#include <string>
using namespace std;

// Define the Passenger class
class Passenger {
private:
    string name;
    int age;
    string ticketNumber;

public:

    Passenger(string n, int a, string t) {
        name = n;
        age = a;
        ticketNumber = t;
    }

    
    void displayDetails() {
        cout << "Passenger Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Ticket Number: " << ticketNumber << endl;
    }
};

int main() {
  
    Passenger passenger1("bhanu", 30, "A12345");

    
    passenger1.displayDetails();

    return 0;
}
