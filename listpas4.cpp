
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
    void destroy(list <Student>&);
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
   cout<<"SHOW FUNCTION\n";
   for (ity = lity.begin(); ity != lity.end(); ++ity)
    {
        cout<<"NUM= "<<(*ity).num<<endl;
        cout<<"NAME= "<<(*ity).name<<endl;
    }
    return;   
}

void Student:: destroy(list <Student>& lit)
{
    int numb=0;
    int count=0;
    cout<<"Enter num of object to destroy\n";
    cin>>numb;
    list<Student>::iterator ite;//,ite2;
     for (ite = lit.begin(); ite != lit.end(); ++ite)
     {
         count++;
         cout<<"Address of iterator "<<&(*ite)<<endl;
         if((*ite).num==numb)
         {
            cout<<"NUm FOUnd @         "<<&(*ite)<<endl;
            //ite2=ite;
            lit.erase(ite);
            break;
         }
     }
    //advance(ite,count);
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
    
    obj.destroy(lit);
    cout<<"PRINTING after DESTROYING\n";
    obj.show(lit,it);
    
    return 0;
}