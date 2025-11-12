#ifndef BIRD_H
#define BIRD_H

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
      
  };







#endif
