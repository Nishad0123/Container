#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec={2,4,6,8,3,5,7};
	
	vector<int>::iterator ite;
	vector<int>::iterator ite2;
	int i=0;
//	vec.assign(5,++i);
//	ite=vec.begin();
//	ite2=vec.end();
//	for(auto vec.begin():vec.end())
//	for(auto ite:ite2)
	cout<<"address of vec.begin "<<&(*vec.begin())<<endl;
	cout<<"address of vec.end  "<<&(*vec.end())<<endl;

	for(ite=vec.begin();ite<vec.end();ite++)
	{
		cout<<*ite<<endl;
		cout<<"addrs	"<<&(*ite)<<endl;
	}

	cout<<"size="<<vec.size()<<endl;
	cout<<"Enter values\n";
	for(auto i=0;i<vec.size();i++)
	{
		cin>>vec[i];
		cout<<"addr of vec "<<&vec[i]<<endl;
		//++ite;
	}
	cout<<endl;
	for(auto i=0;i<vec.size();i++)
	{
		//cout<<"values"<<vec[i]<<endl;
		cout<<"Address of ite "<<&(*ite)<<endl;
		cout<<*ite<<endl;
		++ite;
	}

}
