#include<iostream>
using namespace std;

int main()
{
    int no = 11;

    int &ref = no;

    int *p = &no;
	
	cout<<"The value of &ref"<<&ref<<"\n;
	
	
	cout<<"The value of *p"<<*p<<"\n";
	
//	cout<<"the size of &ref is:"<<sizeof(&ref)<<"\";
	
	// cout<<"the size of *p is:"<<sizeof(p)<<"\n";
	
    return 0;
}