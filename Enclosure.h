#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure{
      private:
      Animal* Animal;
      int capacity;
      int currentCount;
      public:
      Enclosure(){
      Animal* =nullptr;
      capacity=0;
       currentCount=0;
      }
      Enclosure(Animal* a,int ca,int cur){
        Animal*=a;  
        capacity=ca;
        currentCount=cur;
      }
      ~Enclosure(){}
      delete[]Animal*;
      void addAnimal(Animal*a){
          
      }
      void displayAnimals(){
          
      }
 void operator+=(Animal* animal) {
        animals.push_back(animal);
    }
    
    Animal* operator[](const string& name) {
        for (Animal* animal : animals) {
            if (animal->getName() == name) {
                return animal;
            }
        }
        return nullptr;
    }
    
    friend ostream& operator<<(ostream& os, const Enclosure& e) {
        os << "Enclosure contains " << e.animals.size() << " animals:\n";
        for (size_t i = 0; i < e.animals.size(); i++) {
            os << "  " << *(e.animals[i]) << "\n";
        }
        return os;
    }
    
    const vector<Animal*>& getAnimals() const {
        return animals;
    }
  };








#endif
