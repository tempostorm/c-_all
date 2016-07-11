#include <iostream>
using namespace std;


void print_numbers()
{
	for ( int i = 0; i < 10; i++ ) 
	{
		cout << i << endl;
	}
}


void print_max_val( int a, int b, int c)
{

	
	 
	 if ( ( a > b ) && ( a > c ) )  cout<< a << " is bigger" << endl; 
	 else if (  ( b > c ) && ( b > a ) ) cout << b << " is bigger " << endl;
	 else if ( ( c > a ) && ( c > b ) ) cout << c << " is bigger "  << endl;
	 
	 
}


void print_min_val(int a, int b, int c)
{
	if( (a < b ) && (a < c ) ) cout<<a<<"is smaller" << endl;
	else if ( (b < a ) && ( b < c ) ) cout<<b<<"is smaller" <<endl;
	else if ( (c < a ) && (c < b) ) cout<<c<<"is smaller" <<endl;


}

void print_average(int a, int b, int c) {

	int z = ( a + b + c  ) / 3;
	
	cout << "average is from 3 numbers : " << z << endl;
	

}