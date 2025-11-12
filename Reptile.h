#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile():public Animal(){
      private:
      bool isVenomous;
      public:
      Reptile(){
        isVenomous=true;
      }
      Reptile(bool v):Animal(string n,int a,bool hungry){
         isVenomous=v;
      }
      ~Reptile(){}
      void setIsVenomous(srting v){
        isVenomous=v; ;
      }
      string getIsVenomous(){
          return isVenomous;
      }
      
  };








#endif
