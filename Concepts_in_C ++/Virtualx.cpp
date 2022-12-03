#include<iostream>
using namespace std;

class Base   // parents class
{
    public:
        int A,B;       
        void fun()  {   cout<<"Base fun\n"; }       // 1000
        virtual void gun()  {   cout<<"Base gun\n"; }      // 2000 
        virtual void sun()  {   cout<<"Base sun\n"; }      // 3000
};   // Size of class base is = 8 bytes of virtual + 8 bytes of int = 16 bytes 

class Derived : public Base      // This is sinle level inheritance // chass derived is child class
{
    public:
        int X,Y;
        void gun()  {   cout<<"Derived gun\n";  }       // 4000
        void run()  {   cout<<"Derived run\n";  }       // 5000
        void mun()  {   cout<<"Derived mun\n";  }      // 6000
		
};   // size of derived class= size of base class  + characteristics in derived class  =16 + 8= 24 bytes 

int main()
{
	// Base *bp = NULL;
	
    Derived  *dp = NULL;
	
	
    Derived dobj;
	
	//bp = & dobj;        // Up casting
	
    dp = & dobj;        // no casting

   // bp->fun();      // CALL 1000    //  Base fun
   // bp->gun();      // CALL 2000     //  Derived gun
   // bp->sun();      // CALL 3000     //   Base sun
	//bp->mun();      // CALL 3000     // error bcz mun is not member of base class 
	
	dp->fun();      // CALL 1000       // Base fun 
    dp->gun();      // CALL 2000       // Derived gun
    dp->sun();      // CALL 3000           // Base fun
    dp->mun();      // CALL 3000           // Derived mun
    return 0;
}7