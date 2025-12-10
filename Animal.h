#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
  private:
  string name;
  int age;
  bool isHungry;
  public:
  Animal(){
  name="";
  int=0;
  bool=true;
  }
  Animal(string n,int a,bool hungry){
      name=n;
      age=a;
      isHungry=hungry;
  }
  ~Animal(){}
  void setName(string n){
      name=n;
  }
  void setAge(int a){
      age=a;
  }
  void setIsHungry(bool h){
      isHungry=h;
  }
  string getName(){
      return name;
  }
  int getAge(){
      return age;
  }
  bool getIsHungry(){
      return isHungry;
  }
  void display(){
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<age<<endl;
      cout<<"Hunger Status:"<<isHungry<<endl;
  }
  void feed(){
      if(isHungry=true){
          cout<<"hungry"<<endl;
      }
      else{
          cout<<"not hungry"<<endl;
      }
  }
 friend ostream& operator<<(ostream& os, const Animal& a) {
        os << "Name: " << a.name << ", Age: " << a.age;
        return os;
    }
    
    bool operator==(const Animal& other) const {
        return (name == other.name && age == other.age);
    }
};



#endif
