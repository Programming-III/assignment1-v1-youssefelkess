#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
class Bird():public Animal(){
      private:
      float wingSpan;
      public:
      Bird(){
          wingSpan=0.0;
      }
      Bird(float w):Animal(string n,int a,bool hungry){
          wingSpan=w;
      }
      ~Bird(){}
      void setWingSpan(srting w){
         wingSpan=w;
      }
      string getWingSpan(){
          return wingSpan;
      }
      
  };






#endif
