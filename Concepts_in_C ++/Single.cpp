#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base     // class Derived extends Base  (Syntax of Java)
{   
    public:
        int X,Y;
        
        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destrcutor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

int main()
{
    // Derived dobj;        // Static memory allocation

    Derived * ptr = NULL;

    ptr = new Derived;      // Dynamic memory allocation

    ptr->fun();
    ptr->gun();

    delete ptr;

    return 0;
}

/*
Inside Base constructor     call all constructor from top to bottom 

Inside derived constructor

Inside Base fun              call function as per sequnce 

Inside gun of Derived       
                                     

Inside derived destrcutor      call all destructor from botton to top

Inside Base destructor
*/