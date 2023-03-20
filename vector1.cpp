
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int  var=0;
    vector<int> vico;
    cout<<"Enter the Value"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>var;
        vico.push_back(var);
        
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"vector="<<vico[i]<<endl;
        
    }
    
    return 0;
}
