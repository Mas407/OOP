#include<iostream>
using namespace std;

class teacher{
public:
virtual void sound(){

    cout<<"Teacher sound like a ......."<<endl;
}
};
class student:public teacher{
public:
void sound(){
    cout<<"Student sound like a ...."<<endl;
}


};

int main(){
teacher *s;
student s1;
s=&s1;
s->sound();


return 0;
}
