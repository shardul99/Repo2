#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
    string name;
    int age;
    bool gender;
    public:

    //void set(string s, int n, bool g){
       // name = s;
        //age = n;
        //gender = g;
    //}
    student()
    {
        cout<<"default constructor"<<endl;
    }

    student(string s,int n, bool g)
    {
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = n;
        gender = g;
    }
    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    void print(){
        cout<<"The name is "<<name<<endl;
        cout<<"The age is "<<age<<endl;
        cout<<"The gender is "<<gender<<endl;
    }

    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender)
            return true;
        else 
            return false; 
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    student a("shardul", 21, 1);
    a.print();
    student b("Neha", 21, 0);
    student c = b;
    c.print();
    student d;
    if(c==b) 
        cout<<"same"<<endl;
    else 
        cout<<"Not same"<<endl;
}