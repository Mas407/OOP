#include<iostream>
using namespace std;

class teacher{
public:

virtual void display()=0;

 };
 class person:public teacher{
    public:
    int number=14;
 void display(){
        cout<<" i am fine and you "<<number<<endl;
    }
    ~person(){

    }
 };

 int main(){
  teacher *p=new person();   // yaha pa ham na abstract function ke value heap pa store ke ha agr ham na stack pa he rakhni to uska tarika ya ha  
p->display();                                                                                                                                     //teacher *p;
delete p;                                                                                                                                           // person s1;
                                                                                                                                                  // p=&s1;
                                                                                                                                                  // p->display();
                                                                                                                                                  
                                                                                                                                
   

   

 }

