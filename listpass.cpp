
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
    
    void add_usr(list<Student>&, Student&);
};

void Student::add_usr(list<Student>& lit, Student &obj)
{
    
    cout<<"Enter num\n";
    cin>>obj.num;
    cout<<"Enter name\n";
    cin>>obj.name;
    
    lit.push_back(obj);
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
    
    obj.add_usr(lit, obj);
    
    for (it = lit.begin(); it != lit.end(); ++it)
    {
        cout<<"NUM= "<<(*it).num<<endl;
        cout<<"NAME= "<<(*it).name<<endl;
    }
    
    return 0;
}