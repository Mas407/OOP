#include<iostream>
#include<cstring>
using namespace std;


class book{
private:
char *name;
public:
book(const char*a){
    name=new char[strlen(a)+1];
    strcpy(name,a);
}
book(book & a){
name=new char[strlen(a.name)+1];
strcpy(name,a.name);
}
void setName(const char *a){
    name=new char[strlen(a)+1];
    strcpy(name,a);
}
const char* getName(){
    return name;
} 
void display(){
    cout<<"Name of the book is "<<name<<endl;
}



};

int main(){
book s1("DLD");
s1.display();
book s2(s1);
s2.setName("Programming");
s2.display();

    return 0;
}
