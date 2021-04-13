#include<iostream>
using namespace std;

int main()
{
	int i,t,x,y;
	int a[t];
	
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>x;
		cin>>y;
		a[i] = x+y;
		
	}
	for(i=0;i<t;i++)
	{
		cout<< a[i] << "\n";
		
	}
	
}
