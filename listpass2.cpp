
#include <iostream>
#include<cstring>
#include<list>
#include<string>
using namespace std;

class Student
{
    public:
    int num;
    string name;
    
    void add_usr(list<Student>&);
};

void Student::add_usr(list<Student>& lit)
{
    
    cout<<"Enter num\n";
    cin>>num;
    cout<<"Enter name\n";
    cin>>name;
    
    lit.push_back(*this);
    return;   
}

int main()
{
    Student obj;
    obj.num=5;
    obj.name="Haker";
    list<Student> lit;
    list<Student>::iterator it;
    lit.push_back(obj);
    
    obj.add_usr(lit);
    
    for (it = lit.begin(); it != lit.end(); ++it)
    {
        cout<<"NUM= "<<(*it).num<<endl;
        cout<<"NAME= "<<(*it).name<<endl;
    }
    
    return 0;
}