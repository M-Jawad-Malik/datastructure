#include <iostream>
using namespace std;
class rectangleType
{

friend ostream& operator<< (ostream&, const rectangleType &);
friend istream& operator>> (istream&, rectangleType &);
public:
void setDimension(double l, double w);
double getLength() const;
double getWidth() const;
double area() const;
double perimeter() const;
void print() const;
rectangleType operator+(const rectangleType&) const;
rectangleType operator*(const rectangleType&) const;
bool operator==(const rectangleType&) const;
bool operator!=(const rectangleType&) const;
rectangleType();
rectangleType(double l, double w);
private:
double length;
double width;
};
rectangleType::rectangleType(double a,double b)
{
	length=a;
	width=b;
}
rectangleType::rectangleType()
{
	length=0;
	width=0;
}
ostream& operator<< (ostream& osObject,const rectangleType& rectangle)
{
osObject << "Length = " << rectangle.length<< "; Width = " << rectangle.width;
return osObject;
}
istream& operator>> (istream& isObject,rectangleType& rectangle)
{
isObject >> rectangle.length >> rectangle.width;
return isObject;
}
int main() 
{ 
rectangleType myRectangle(23, 45); 
rectangleType yourRectangle; 
cout << "Line 8: myRectangle: " << myRectangle
<< endl; 
cout << "Line 9: Enter the length and width "<< "of a rectangle: "; //Line 9
cin >> yourRectangle; 
cout << endl; 
cout<<myRectangle;
cout<<endl;
cout << "Line 12: yourRectangle: "<< yourRectangle << endl; 

return 0; 
}
