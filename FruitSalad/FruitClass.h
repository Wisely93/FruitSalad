#include <iostream>
using namespace std;

class Fruit
{
private:
	string Name;
	
public:
	Fruit(string _name)
	{
		Name = _name;
	}

	void Chopp()
	{
		cout << "chopping " << Name <<" into pieces..."<< endl;
	}

	void Mix()
	{
		cout << "Mixing " << Name <<" into salad..."<< endl;
	}

	void Adding()
	{
		cout << "Adding " << Name << " into bowl..."<<endl;
	}
};