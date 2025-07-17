


#include<iostream>
using namespace std;


class student{

private:
int number;
float percantage;
string name;
public:
student(int a,float b,string c){
    number=a;
    percantage=b;
    name=c;
    cout<<"Name of the student is "<<name<<endl<<"Number of the student "<<number<<endl<<"Percantage of the student is "<<percantage<<endl;
}
student(student & s){
    number=s.number;
    percantage=s.percantage;
    name=s.name;
    cout<<"Name of the student is "<<name<<endl<<"Number of the student "<<number<<endl<<"Percantage of the student is "<<percantage;
}


};
int main(){
student s1(1000,99.4,"Masroor ALi");
student s2=s1;


    return 0;
}
