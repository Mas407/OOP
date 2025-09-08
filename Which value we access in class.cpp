
#include<iostream>
using namespace std;

class person{
  --->>// private:// agr number private ha to ya code Error da ga  --> private ko bss ham inside class ma he access kar sakta han 
       protected:                           // agr yaha ham protected use kara to usko ham easily access kar sakta han inside the class or outside the class but object sa access nhi karsata
    int number=10;
    public:  // public kahi bi access kar sakta han
    // int number;
    void display(){
        cout<<"Total number is "<<number<<endl;
    }
};

class student:public person{
    
    public:
    void display(){
        cout<<"My name is Masroor ali"<<number;
    }
};
int main(){
person *p;
student s1;
p=&s1;
p->display(); // jab bi pointer use karna ha to display karna ka lia -> iska use karta han



return 0;
}
