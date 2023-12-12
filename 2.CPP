#include<iostream>
using namespace std;
int main()
{
int x,y;
	try{
    cout<<"Enter Two Numbers : ";
	cin>>x>>y;
	if (y==0)
	{
		throw"Division by Zero!";
	}
	cout<<x/y;

	}catch(const char* msg)
	{
    cerr << msg << endl;
	}

return 0;
}
