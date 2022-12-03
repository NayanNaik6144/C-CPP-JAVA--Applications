#include<iostream>

using namespace std; 

class Addition 
{
	public :
	int iNo1;
	int iNo2;
	int iAns;
	
	Addition()
	{
		iNo1=0;
		iNo2=0;
		iAns=0;
	}
	
	Addition( int a, int b)
	{
		a=iNo1;
		b=iNo2;
	}
	
	
	 void setData(  );
	 
	 friend void findAdd(Addition &A);
	 
};
 void Addition::setData( )
 {
	 cout<<"Enter first number"<<"\n" ;
	 cin>>iNo1;
	 
	  cout<<"Enter second number"<<"\n";
	 cin>>iNo2;
 }
 
 void findAdd(Addition &A)
 {
	 A.iAns= A.iNo1+A.iNo2;
	 
	 cout<<"The Addition is:"<<A.iAns<<"\n";
 }
 
 int main()
 { 
    Addition B;   // We create object of class largest 
	B.setData( );
	
	findAdd(B);   // Calling function 
	  return 0;
 }