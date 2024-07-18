#include <iostream>
using namespace std;

class Human{
    public:
        int legs;
        int hands;
        int eyes;
        
    public:
    
        void setLegs(int legs){
            this->legs = legs;
        }
        
        int getLegs(){
            return this -> legs;
        }
        
        void setHands(int hands){
            this->hands = hands;
        }
        
        int getHands(){
            return this-> hands;
        }
        
        void setEyes(int eyes){
            this->eyes = eyes;
        }
        
        int getEyes(){
            return this->eyes;
        }
};

class LimitBreaker : public Human{
    public:
        int strength = 99;
        int speed = 99;
        
    void enhance(){
        cout<<"Added strength and power to : "<<strength<<" "<<speed<<endl;
    }
};

int main() {

    LimitBreaker lb;
    
    lb.enhance();
    lb.setLegs(2);
    lb.setHands(4);
    cout<<"Total Hands is : "<<lb.getHands()<<endl;
    cout<<"Total Legs is : "<<lb.getLegs()<<endl;
    
    return 0;
}

//Inhertence scope wise distinguse
// Parent | Child -> main

// public | public -> public
// public | private -> private
// public | protected -> protected

// protected | public -> protected
// protected | private -> private
// protected | protected -> protected

// //private meber of parent class is not inhertitable
// private | private -> NA
// private | public -> NA
// private | protected -> NA











