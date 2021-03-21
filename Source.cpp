#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
	Complex l;
	cin >> l;
	cout << l;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << endl;
	cout << "inkrement(prefiksna forma)" << endl;
	++l; cout << l;;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << endl;
	cout << "dykryment(prefiksna forma)" << endl;
	--l; cout << l;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << endl;
	cout << "inkryment(postfiksna forma)" << endl;
	l++; cout << l;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	cout << endl;
	cout << "dykrement(postfiksna forma)" << endl;
	l--; cout << l;
	l.Sub();
	l.Div();
	l.Conj1();
	l.Conj2();
	return 0;
}