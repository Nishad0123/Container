#include<iostream>
#include<list>
#include<iterator>
#include<string>
using namespace std;
 
class Water
{
	int num;
	string brand;
	float vol;

	public:
	Water();
	Water(int num, string brand, int vol);
	Water getwater(int num, string brand, int vol);
};

Water::Water(int num, string brand, int vol)
{
	this->num=num;
	this->brand=brand;
	this->vol=vol;
}

Water Water::getwater(int num, string brand, int vol)
{
	this->num=num;
	this->brand=brand;
	this->vol=vol;

}

int main()
{
	Water botle(5,"aqua",4.5);
	list<Water> lit1;
	list<Water>::iterator itr;

	for(auto itr=list.)
}
