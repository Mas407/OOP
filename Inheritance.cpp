#include<iostream>
using namespace std;


class car{
public:
void display(){
    cout<<"Honda Civic"<<endl;
}

};
class card:public car{
public:
void display(){
    cout<<"BMW 10"<<endl;
}
};

int main(){
car *ptr;
card s1;
ptr=&s1;
ptr->display();   // -> (means this is ) jab bi ham na pointer ko show karwana ha to ya arrow satt lagana para ga 
 


    return 0;
}
