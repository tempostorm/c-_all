
#include "print_numbers.h"

/*ggfsdgfsdg
sdfdfgsdfgdsfg
fdsfdgfdsgg
dsfgdsfgsdfsdfgdsfg
*/




int main (int argc, char *argv[])
{
	char a = 'g';
	char a2 = 'a';
	char b = 'o';
	char b2 = 'r';
	char c = 'r';
	char c2 = 't';
	
	cout << a << "\t" << a2 << '\n' << b << "\t" << b2 << '\n' << c << '\t' << c2 << '\n'  << endl;
	
	print_numbers();
	
	int val1, val2, val3;
	
	cout<< "enter 3 numbers to compare : ";
	cin>> val1 >> val2 >> val3;
	
	
	print_max_val(val1, val2, val3);
	
	print_min_val(val1, val2, val3);
	
	print_average(val1, val2, val3);
	
	int input1;
	int input2;
	
	cout<<"enter input1 ";
	cin>> input1;
	cout<< "input1 is : "<< input1 << endl;
	
	cout<<"\nenter input2 ";
	cin>> input2;
	cout<<"input2 is : " << input2 << endl;
	
	 cout<< "inputs are " << input1 << " + " << input2 << " = " << input1 + input2 << endl; 
	
	
	
	
	
	return 0;
}

