
#include <iostream>
#include<cstring>
#include<list>
#include<string>
//#include<iterator>
using namespace std;

class Student
{
    public:
    int num;
    string name;
    
    void add_usr(list<Student>&);
    //void add_usr();
    void show(list <Student>&, list<Student>::iterator );
};

void Student::add_usr(list<Student>& lity)
//void Student::add_usr()
{
    
    cout<<"Enter num\n";
    cin>>num;
    cout<<"Enter name\n";
    cin>>name;
    
    lity.push_back(*this);
    return;   
}

void Student::show(list<Student>& lity, list<Student>::iterator ity)
{
  //  cout<<"SHOW FUNCTION\n";
   for (ity = lity.begin(); ity != lity.end(); ++ity)
    {
        cout<<"NUM= "<<(*ity).num<<endl;
        cout<<"NAME= "<<(*ity).name<<endl;
    }
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
    cout<<"ADD USER\n";
    
   obj.add_usr(lit);
  //obj.add_usr();  
    for (it = lit.begin(); it != lit.end(); ++it)
    {
        cout<<"NUM= "<<(*it).num<<endl;
        cout<<"NAME= "<<(*it).name<<endl;
    }
    cout<<"ADD USER\n";
    
    obj.add_usr(lit);
    cout<<"PRINTING\n";
    obj.show(lit, it);
    return 0;
}