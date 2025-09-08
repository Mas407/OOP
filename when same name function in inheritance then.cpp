

#include<iostream>
using namespace std;


class teacher{
public:
void display(){
    cout<<"i am a teacher ";
}

};
class student:public teacher{
    public:
    void display(){
        cout<<"I am student "<<endl;
    }
};

int main(){
student s;
s.display();// ab yaha pa isko kasa pata ka konsa function run karna ha ya by default drived class ko print kara ga
//    agr base class ko print karna ha to hama kuch is tarha sa karna ho ga
s.teacher::display();

    return 0;
}
