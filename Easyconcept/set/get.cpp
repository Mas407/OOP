#include<iostream>
using namespace std;


class student{
private:
int number;

public:
void setNumber(int n){                     // Set value dana ka lia use hota ha
    number=n;
}
int getNumber(){                         //get value lana ka lia use hota ha 

                                        //ab ma na set ko 10 value de or get na muja 10 show karwa de 
  return number;
}


};
int main(){

student s;

s.setNumber(10);          // ya number da raha han means set kar raha han

cout<<s.getNumber();

    return 0;
}
