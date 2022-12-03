#include<iostream>

using namespace std;

class Base
{
    //     int X;   // when we dont metion which access specifiers is used the class consider as default private constructor 
    public:
        int i;
    private:
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
        void fun()
        {
            cout<<"Value of public i from fun : "<<i<<"\n";  // A
            cout<<"Value of private j from fun : "<<j<<"\n"; // A
            cout<<"Value of protected k from fun  : "<<k<<"\n"; // A        
        }
		
}; // Size of class base is 12 bytes

int main()
{
   // Base bobj;        // Create object of class base
	
   // cout<<"Value of public i : "<<bobj.i<<"\n"; // A       // class member access with the help of dot operator 
   // cout<<"Value of private j : "<<bobj.j<<"\n"; // NA
   // cout<<"Value of protected k : "<<bobj.k<<"\n"; // NA
    
   //bobj.fun();
	
	Base *bp=NULL;       //  bp is pointer to base which initilly contain null value
	
	bp=new Base ;         // Dynamic memory allocation 
	
	//bp=&bobj;
	
	 cout<<"Value of public i : "<<bp->i<<"\n"; // A         // Member of class access with the help of indirecting access operator 
     //cout<<"Value of public i : "<<bp->j<<"\n"; // NA
	// cout<<"Value of public i : "<<bp->k<<"\n"; // NA
	
     bp->fun();  // Allowed 
	 
	 delete bp;     // delete used to free the allocating the memory 
	 
    return 0;
}