
#include<iostream>
using namespace std;


class person{
public:
    void display(){
        cout<<"Hello i am person "<<endl;
    }
};
class learner{
public:
    void display(){
        cout<<"Hello i am learner "<<endl;
    }
};
class teacher:public person,public learner{
public:
void display(){
    cout<<"I am  teacher "<<endl;
}


};
int main(){
teacher s;
s.person::display();
s.learner::display();
s.teacher::display();




    return 0;
}
