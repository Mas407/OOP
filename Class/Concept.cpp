#include<iostream>
using namespace std;

class student{

private:
int rollnumber;
float number;
char grade;
string name;

public:
 
        void Rollnumber(int n){
        rollnumber=n;
    }
    void Number(int n){
    number=n;
    }
    void Grade(int n){
            grade=n;
                }
                        void Name(string n){
                            name=n;
                        }
            void display(){
                cout<<"Name is "<<name<<endl;
            cout<<"Roll number "<<rollnumber<<endl;
            cout<<"Number is "<<number<<endl;
            cout<<"Grade is "<<grade<<endl;
            }
};

        int main(){
          student s;
            int a;
                char b;
        int c;
        string d;
 cout<<"Enter the roll number ";
  cin>>a;
 s.Rollnumber(a);
  cout<<"Enter the Grade of the student ";
    cin>>b;
        s.Grade(b);
          cout<<"Enter the number of the student ";
            cin>>c;
            s.Number(c);
cout<<"Enter the name of the student ";
           cin>>d;
         s.Name(d); 


// s.Rollnumber(10);
// s.Grade('A');
// s.Name("Masroor Ali");
// s.Number(100);

s.display();
    return 0;
}
