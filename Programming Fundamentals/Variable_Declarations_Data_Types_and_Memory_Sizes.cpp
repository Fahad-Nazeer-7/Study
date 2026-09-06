#include<iostream>
#include<string>
using namespace std;
int main() 
{
	//declaring variables of different data types
	int a(1);
	short int b(2);
	unsigned short int c(3);
	unsigned int d(4);
	long int e(5L);
	unsigned long int f(6L);
	long long int g(7LL) ;
	unsigned long long int h(8LL);
	float i(9.0f);
	double j(10.0);
	long double k(11.0L)  ;
	char l('L');
	string m("Hello, World!");
	bool n(true);
	cout << "Data Type      Assigned  Value Size(bytes)" << endl;
	cout << "int            " << a << "        " << sizeof(a) << endl;
	cout << "short int      " << b << "        " << sizeof(b) << endl;
	cout << "unsigned short int " << c << "        " << sizeof(c) << endl;
	cout << "unsigned int   " << d << "        " << sizeof(d) << endl;
	cout << "long int       " << e << "        " << sizeof(e) << endl;
	cout << "unsigned long int " << f << "        " << sizeof(f) << endl;
	cout << "long long int  " << g << "        " << sizeof(g) << endl;
	cout << "unsigned long long int " << h << "        " << sizeof(h) << endl;
	cout << "float          " << i << "        " << sizeof(i) << endl;
	cout << "double         " << j << "        " << sizeof(j) << endl;
	cout << "long double    " << k << "        " << sizeof(k) << endl;
	cout << "char           " << l << "        " << sizeof(l) << endl;
	cout << "string         " << m << "        " << sizeof(m) << endl;
	cout << "bool           " << n << "        " << sizeof(n) << endl;
	return 0;
}