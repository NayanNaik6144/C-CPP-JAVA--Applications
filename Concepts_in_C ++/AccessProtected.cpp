#include<iostream>
using namespace std;

class Base  
{
    public:
        int i;
    private:     // Private member access only within the class it cant access out of the class 
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }
};

class Derived : public Base    // protected member access from base class to its inheritance child class 
{   
    public:
        void fun()
        {
            cout<<"Value of public i of Base : "<<i<<"\n";  // A
            // cout<<"Value of private j of Base : "<<j<<"\n"; // NA
            cout<<"Value of protetced k of Base : "<<k<<"\n";   // A
        }
};

int main()
{
    //Derived dobj;          // Satic memory allocation 

    //dobj.fun();
	
	//Derived *dp=NULL ;
	
	//dp = new Derived ;   // dynamic memory allocation 
	 
	//dp->fun();
	
	//delete dp;
	
	 Derived dobj;         // member access with the help of reference data type 
	 
	 Derived &dref=dobj;     // no casting
	 
	 dref.fun();

    return 0;
}