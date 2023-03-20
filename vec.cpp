#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vc={11,33,55,77,99,22,44,66};

	cout<<"size="<<sizeof(vc)<<endl;
	
	vector<int>::iterator ti;
	cout<<endl;
//	for(ti=vc.begin(); ti<vc.end();++ti)
	{
//		*ti=5;
	}

	vector<int>::iterator ti2;

	for(ti=vc.begin(); ti<vc.end();++ti)
	{
		cout<<*ti<<"	"<<endl;
	}
	cout<<endl;
	for( ti=vc.end()-1; ti>=vc.begin(); --ti)
	{
		cout<<*ti<<"	go\n";
	}
	cout<<endl;

//	for(auto ti=vc.cbegin(); ti<vc.cend();++ti)
	{
//		cout<<*ti<<"	nn\n";
	}
}
