#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;   // 4 bytes
    private:
        int j;    // 4 bytes
    protected:
        int k;     // 4 bytes
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend void fun();   // Calling Naked function with the help of Friend function 
};  // size of Demo class is 12 bytes

void fun()  // Naked function
{
    Demo obj;  // Alwyas Create object of class in function for accessing member 
	
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.j<<"\n";
    cout<<"Value of k : "<<obj.k<<"\n";
}
int main()
{
    fun();    // calling fun 
    return 0;
}