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
     
    void displayData()
    {
		cout<<"Meters value is"<<Meters<<"\n";
	
	}	
	
	friend void addValue(Distance &d);
	
	
};

void addValue(Distance &d)
{
	d.Meters=d.Meters + 10;
}

int main()
{
	Distance d1;
	
	d1.displayData() ; // 0
	
	addValue(d1);
	
	cout<<endl<<endl ;
	
	d1.displayData();
	

	
	return 0;
}