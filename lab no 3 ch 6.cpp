#include<iostream>
using namespace std;
float rectangle(float,float);
int main()
{ float length,width;
 cout<<"Enter the Length :";
 cin>>length;
 cout<<"Enter the Width :";
 cin>>width;
 cout<<"Area of Rectangle : "<<rectangle( length, width);

	
}
float rectangle(float length,float width)
{
	float rectangle=length*width;
	return rectangle;
}
