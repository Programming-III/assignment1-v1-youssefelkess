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
  };








#endif
