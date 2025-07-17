

#include<iostream>
using namespace std;


class car{
private:
string model;
public:

car(string m){
    model=m;
    cout<<"Determining the best cars "<<model<<endl;
}

};
int main(){
car s1("BMW X3");
car s2("Lexus LC");


    return 0;
}
