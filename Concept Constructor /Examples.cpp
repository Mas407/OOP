#include<iostream>
using namespace std;


class student{
private:
int number;
string name;
float floating;
public:
student(){  // Default constructor 
name="Unknown";
number=0;

}

student(string n,int a){  // Paratermized constructor 
    name=n;
    number=a;
}
student (int a,string b):name(b),number(a)  //this class using list 
{

}

student(float floating,int number,string name){  // class is use same name variable and parameter
    this->name=name;             //this used to tell in which adress value store
    this->number=number;
    this->floating=floating;
}

void setName(string n){
    name=n;
}

string getName(){
    return name;
}


void display(){
    cout<<"Name of the student is "<<name<<endl;
    cout<<"Number of the student "<<number<<endl;
}
void display2(){
    cout<<"Name of the studnet is "<<name<<endl;
    cout<<"Number of the student "<<number<<endl;
    cout<<"Floating point value is "<<floating<<endl;
}

//Destructor 

~student(){
    //Empty
}


};


int main(){
 student s1;// default constructor call
s1.display(); // display function call

student s2("Masroor Ali",35);  //Parameterized constructor call
s2.display();  // display function call


student s3(s2);  // Copy constructor  use
s3.display(); //display funcation call
 

// if you want to change any thing use --> set

student s4(s3); // copy constructor use
s4.setName("Chatgpt");  // set function use to assign values 
s4.display();   //display function call

//if you want to change name or show only name not number

student s5(s4);//copy.......
s5.setName("Hi Github ");
cout<<s5.getName()<<endl;   // Always use cout because return type function always with cout statement otherwise not print check it
  

// using initilization list 

student s6(10,"Hello guys");
s6.display();


// if name of variable and parameter are same then

student s7(10.55,2,"BLUE Moives"); 
s7.display2();


// using to store value in heap 

student *s8=new student("Hussnain",47);
s8->display();
delete s8;




return 0;
}
