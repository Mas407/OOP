
#include<iostream>
using namespace std;


class person{
public:
virtual void display(){
    cout<<"I am the person ";
}
};
class student:public person{
    public:
    void display(){
    cout<<"I am the student "<<endl;}
};
class teacher:public person{
    public:
    void display(){
        cout<<"i am the teacher "<<endl;
    }
};
class principal:public person{

public:
void display(){
    cout<<"I am the principal "<<endl;
}

};
int main(){

person *ptr;
student s;
teacher t;
principal p;
ptr=&s; ptr->display();
ptr=&t; ptr->display();
ptr=&p; ptr->display();



    return 0;
}
