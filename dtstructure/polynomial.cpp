#include <iostream>
#include "polynomialType.h" 
using namespace std; 
int main()
{
polynomialType p(8); 
polynomialType q(4); 
polynomialType t;
cin >> p; 
cout << endl << "p(x): " << p << endl; 
cin >> q;
cout << endl << "q(x): " << q << endl<< endl; 
t = p + q; 
cout << "p(x) + q(x): " << t << endl; 
cout << "p(x) - q(x): " << p - q << endl; 
return 0;
} 
