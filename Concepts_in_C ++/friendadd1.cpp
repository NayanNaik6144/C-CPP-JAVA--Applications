#include<iostream>

using namespace std;

class Distance 
{
	private:
	
     int Meters;
	 
    public:
	
	Distance()
	{
		Meters=0;
	}
     
	friend void addValue();
	
	
};

void addValue()
{
	Distance d;
	
    cout<<"Meters value is  :"<<d.Meters<<"\n";
	
	d.Meters=d.Meters + 10;
	
	cout<<" New Meters value is  :"<<d.Meters<<"\n";
	
	
}

int main()
{
	addValue();

	
	return 0;
}