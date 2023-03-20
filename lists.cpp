#include<iostream>
#include<list>
#include<iterator>

using namespace std;
/*
list<int> addlist(list<int> lit)	//PASS by REFERENCE
{
	cout<<"addlist\n";
	for(auto itr=lit.begin(); itr!=lit.end(); itr++)
	{
		*itr=*itr+5;
		cout<<*itr<<endl;
	}
	return lit;
}
*/

list<int> addlist(list<int>& lit)	//PASS BY VALUE
{
	cout<<"addlist\n";
	for(auto itr=lit.begin(); itr!=lit.end(); itr++)
	{
		*itr=*itr+5;
		cout<<*itr<<endl;
	}
	return lit;
}

int main()
{
	list<int> lit1, lit2;
	list<int>::iterator itr;
	int num=0;
	cout<<"enter 5 elements\n";
	for(auto i=0; i<5; i++)
	{
		cin>>num;
		lit1.push_back(num);
	}
	cout<<"list 1 \n";
	for(auto itr=lit1.begin(); itr!=lit1.end(); itr++)
	{
		cout<<"ans="<<*itr<<endl;
	}
	cout<<endl;

	lit2=addlist(lit1);
	cout<<"List 2\n";
	for(auto itr=lit2.begin(); itr!=lit2.end(); ++itr)
	{
		cout<<"returning \n";
		cout<<"func= "<<*itr<<endl;
	}

	cout<<"list1 again\n";
	addlist(lit1);
	for(auto itr=lit1.begin(); itr!=lit1.end(); ++itr)
	{
		cout<<"returning \n";
		cout<<"func= "<<*itr<<endl;
	}
	
}
