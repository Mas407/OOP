

#include<iostream>
using namespace std;


class person{
public:
void getinfo(){
cout<<"I am person "<<endl;
}
};
class teacher:public person{
    public:
    void getinfo(){
        cout<<"I am teacher "<<endl;
    }
};
class principal:public teacher{

public:
void getinfo(){
    cout<<"I am principal "<<endl;
}

};
int main(){
principal p;

p.person::getinfo();
p.teacher::getinfo();
p.principal::getinfo();



    return 0;
}
