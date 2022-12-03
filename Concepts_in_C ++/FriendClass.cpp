#include<iostream>
using namespace std;

class Marvellous
{
    public:           // Access specifier public which is public to all any one can access
        void fun();  // Member function
        void gun();  // Member function
		
	

};  // size of Class Marvellous is 1 Bytes this is empty class 

class Demo
{
    public:
        int i;  // 4 bytes 
    private:
        int j;   // 4 bytes
    protected:
        int k;   // 4 bytes
    public:
        Demo()     // Constructor which is default 
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend class Marvellous;  // this is the main main difference between class friend and member friend 
	
};// size of class demo object is 12 bytes

	void Marvellous::fun()  // Member function
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";    // 10
    cout<<"Value of j : "<<obj.j<<"\n";    //20
    cout<<"Value of k : "<<obj.k<<"\n";      //30
}
void Marvellous::gun()  // Member function
{
    Demo obj;
    cout<<"Value of i : "<<obj.i<<"\n";   //10
    cout<<"Value of j : "<<obj.j<<"\n";   // 20
    cout<<"Value of k : "<<obj.k<<"\n";   //30
}


int main()
{
    Marvellous mobj;         // mobj is object of class marvellous

    mobj.fun();             // . dot operator used to access the member of class marvellous 
    mobj.gun();

    return 0;
}