
#include<iostream>
using namespace std;

class student{
private:
string Name;
public:
student(string n){
    Name=n;
    cout<<"My name is "<<Name<<endl;
}
student(student & s){
    Name=s.Name;
    cout<<"My name is "<<Name<<endl;

}

};

int main(){
student s1("Masroor Ali");
student s2=s1;
    return 0;
}

