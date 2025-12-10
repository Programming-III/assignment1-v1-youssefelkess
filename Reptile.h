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
          void sound() override {
        cout << getName() << " hisses!" << endl;
    }
    
    friend ostream& operator<<(ostream& os, const Reptile& r) {
        os << "Reptile (Name: " << r.getName() << ", Age: " << r.getAge() 
           << ", " << (r.isVenomous ? "Venomous" : "Not Venomous") << ")";
        return os;
    }
      
  };








#endif
