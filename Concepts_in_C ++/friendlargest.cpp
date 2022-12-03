#include<iostream>
using namespace std ;

class Largest   // Class having private access specifier
{
	int a;   // 4 bytes    // this all are characteristics 
	int b;  // 4 bytes 
	int m;  // 4 bytes 
	
	public:
	 void setData();
	 
	 friend void findMax(Largest &t);  // prototype for firend function  
	 
	
};   // Size of Class largest is 12 bytes 

void Largest::setData()
{
	cout<<"Enter the first value No:"<<"\n";
	cin>>a;
	
	cout<<"Enter the second  value No:"<<"\n";
	cin>>b;
}

void findMax(Largest &t)   // Main function also called naked function
{
	if(t.a>t.b)
	{
		t.m=t.a;
	}
	else
	{
		t.m=t.b;
	}
	
	cout<<"maximum number is :"<<t.m<<"\n" ;
}

int main()
{
	Largest A;   // We create object of class largest 
	A.setData();
	
	findMax(A);   // Calling function 
	
	
	return 0;
}