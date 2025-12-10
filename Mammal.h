#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal():public Animal(){
      private:
      string furColor;
      public:
      Mammal(){
          furColor="";
      }
      Mammal(string c):Animal(string n,int a,bool hungry){
          furColor=c;
      }
      ~Mammal(){}
      void setFurColor(srting c){
          furColor=c;
      }
      string getFurColor(){
          return furColor;
      }
       void sound() override {
        cout << getName() << " makes a mammal sound!" << endl;
    }
    
    friend ostream& operator<<(ostream& os, const Mammal& m) {
        os << "Mammal (Name: " << m.getName() << ", Age: " << m.getAge() 
           << ", Fur Color: " << m.furColor
           << ", " << (m.isVenomous ? "Venomous" : "Not Venomous") << ")";
        return os;
    }
      
  };





#endif
