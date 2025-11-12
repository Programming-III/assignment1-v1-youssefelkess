#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor{
      private:
      string visitorName;
      int ticketsBought;
      public:
      Visitor(){
          visitorName="";
          ticketsBought=0;
      }
      Visitor(string vis,int t){
          visitorName=vis;
          ticketsBought=t;
      }
      ~Visitor(){}
      void displayInfo(){
          cout<<"Visitor Name:"<<visitorName<<endl;
      cout<<"Tickets Bought:"<<ticketsBought<<endl;
      }
  };








#endif
