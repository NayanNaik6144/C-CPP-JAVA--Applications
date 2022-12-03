#include<iostream>
using namespace std;

class Circle     // parent class
{
    public:                         // Accesss specifier
        float PI;                   // Characteristics
        float Radius;
        Circle()                    // Default constructor
        {   
            PI = 3.14;
            Radius = 0.0;
        }
        Circle(float A, float B)     // Parametrised constructor
        {
            PI = A;
            Radius = B;
        }
        void Display()              // Concrete method          // 1000
        {
            cout<<"Value of radius is : "<<Radius<<"\n";
        }
        virtual float Area() = 0;           // Abstract method  // __
        virtual float Circumfarance() = 0;  // Abstract method  // __
};  // size of circle class  cant be determined bcz we cant create object of abstract class 

class Marvellous : public Circle   // single inheritance 

{
    public:
        Marvellous() : Circle()
        {}
        Marvellous(float X, float Y) : Circle(X,Y)
        {}
        float Area()                // Concrete method      // 2000
        {
            float Ans = PI * Radius * Radius;
            return Ans;
        }
        float Circumfarance()       // Concrete method      // 3000
        {
            float Ans = 0.0;
            Ans = 2 * PI * Radius;
            return Ans;
        }
};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14,10.89);
	
	//Circle cobj;
	
	//cout<<"Size of circle class is"<< sizeof(cobj)<<"\n";
	
	cout<<"Size of Marvellous class is"<< sizeof(mobj2)<<"\n";  // 4+4 +8 = 16 bytes but my compiler gives 12 bytes

    float fret = 0.0;

    fret = mobj2.Area();
    cout<<"Area is : "<<fret<<"\n";

    fret = mobj2.Circumfarance();
    cout<<"Circumfarance is: "<<fret<<"\n";

    return 0;
}