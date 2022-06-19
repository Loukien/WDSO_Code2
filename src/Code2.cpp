#include "libpol.h"
#include "libobjc.h"
#include <iostream>

using namespace std;

int main() 
{
	int dana;
	int wynik;
	
	cout << "Podaj dlugosc boku:";
	cin >> dana;

	wynik=pole(dana)
	cout << "Pole: " <<wynik<<endl;

	wynik=objetosc(dana)
	cout<<"Objetosc: "<< objetosc(dana)<<endl;

	return 0;	
}
