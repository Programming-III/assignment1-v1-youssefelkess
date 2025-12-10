#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
      
   Enclosure enc();

   
   Animal animal1("Age:5",Hungry);
    Animal animal2("Age:2",not Hungry);
     Animal animal3("Age:3",Hungry);

    
    Visitor .displayInfo();

    
    enclosure.addAnimal(a1);
      enclosure.addAnimal(a2);
        enclosure.addAnimal(a3);
    animal.feed(a);
 Enclosure zoo;
    
    Mammal* lion = new Mammal("Sarah", 5, false);
    Bird* parrot = new Bird("Polly", 2, 0.5);
    Reptile* snake = new Reptile("Jake", 3, true, true);
    
    zoo += lion;
    zoo += parrot;
    zoo += snake;
    
    cout << "Enclosure Display" << endl;
    cout << zoo << endl;
    
    cout << " Searching for 'Parrot'" << endl;
    Animal* found = zoo["Polly"];
    if (found) {
        cout << "Found: " << *found << endl;
    } else {
        cout << "Animal not found" << endl;
    }
    
    cout << "\n=== Comparing Animals ===" << endl;
    Mammal lion2("Sarah", 5, false);
    if (*lion == lion2) {
        cout << "Lion and Lion2 are equal animals!" << endl;
    }
    cout << "(Your exact formatting must match your operator<< implementation.)" << endl;
    
    cout << "\n=== Visitor Information ===" << endl;
    Visitor visitor("Sarah Ali", 25, false);
    cout << visitor << endl;
    
   
    cout << "\n=== Polymorphism Test (sound() on Enclosure animals) ===" << endl;
    const vector<Animal*>& zooAnimals = zoo.getAnimals();
    for (Animal* animal : zooAnimals) {
        animal->sound();
    }
    
    
    delete lion;
    delete parrot;
    delete snake;
    
    return 0;
}
