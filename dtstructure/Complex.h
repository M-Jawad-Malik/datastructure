#include<iostream>
class Complex
{
	private:
		int real,imaginary;
	friend std::ostream& operator <<(std::ostream &obj,Complex&);
	friend std::istream& operator >>(std::istream &obj,Complex&);
	public:
	Complex();
	Complex(int,int);
	void set(int , int);
	void get();
	Complex operator +(Complex& com);
	Complex operator *(Complex& com);
		
};
std::ostream& operator <<(std::ostream &obj,Complex& com)
{
	std::cout<<"("<<com.real<<","<<com.imaginary<<")";
	return obj;
}
std::istream& operator >>(std::istream& obj,Complex& com)
{
	char ch;
	std::cin>>ch;
	std::cin>>com.real;
	std::cin>>ch;
	std::cin>>com.imaginary;
	std::cin>>ch;
	return obj;
}
Complex::Complex()
{
	real=0;
	imaginary=0;
}
Complex::Complex(int re,int img)
{
	real=re;
	imaginary=img;
	
}
void Complex::set(int re,int img)
{
	real=re;
	imaginary=img;
}
void Complex::get()
{
	std::cout<<"Complex No  of "<<this<<": ("<<real<<","<<imaginary<<")"<<std::endl;
}
Complex Complex::operator +(Complex& com)
{
	Complex com1;
	com1.real=real+com.real;
	com1.imaginary=imaginary+com.imaginary;
	return com1; 
}
Complex Complex::operator *(Complex& com)
{
	Complex com1;
	int ac,bd,ad,bc;
	ac=real*com.real;
	bd=imaginary*com.imaginary;
	ad=real*com.imaginary;
	bc=imaginary*com.real;
	com1.real=ac-bd;
	com1.imaginary=ad+bc;
	return com1; 
}
