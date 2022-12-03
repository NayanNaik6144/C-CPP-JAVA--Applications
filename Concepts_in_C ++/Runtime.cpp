#include<iostream>
using namespace std;

class Base    // parents class 
{
    public:                         // Access specifier
       int A,B;            
       void fun()                   // Function defination              1000
       {
            cout<<"Base fun\n";
       }        
       void gun(int i)              // Function defination              2000
       {
            cout<<"Base gun with one integer\n";
       }
       void gun(int i, int j)       // Overloaded function defination   3000
       {
            cout<<"Base gun with 2 integers\n";
       }
};   // size of base class is 8 bytes 

class Derived : public Base   // single class inheritance 

{
    public:
        int X,Y;
        void sun()                  // Function defination              4000
        {
            cout<<"Derived sun\n";
        }
        void fun(int i)                  // Function redefination            5000
        {
            cout<<"Derived fun\n";
        }
};  // size of Derived class = size of base class 8 byets and 8 bytes of characteristics 
int main()
{   
    Derived *dp=NULL;
	
    Derived dobj;
	
	dp =&dobj;
	
   //dobj.fun(10);             // CALL 5000 // derived  fun
  // dobj.gun(11);           // CALL 2000     // gun with one integer 
   //dobj.gun(11,21);        // CALL 3000     // gun with two integer
  // dobj.sun();             // CALL 4000    /// Derived sun
  
   // if we want base fun form base class then we use syntax like 
   // dobj.base::fun();    // call 1000 // Base fun 
   
  // dobj.Base::fun();    // call 1000 // Base fun 


   dp->fun(10);             // CALL 5000 // derived  fun
   dp->gun(11);           // CALL 2000     // gun with one integer 
   dp->gun(11,21);        // CALL 3000     // gun with two integer
   dp->sun();             // CALL 4000    /// Derived sun

   dp->Base::fun();        // call 1000 // Base fun  
    return 0;
}