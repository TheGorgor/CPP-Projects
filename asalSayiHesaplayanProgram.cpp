#include "asalSayiHesaplayanProgram.h"
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int Input() {
	int inputValue;
	cout << "Say� gir: " << endl;
	cin >> inputValue;
	return inputValue;
}
bool asalSayiMi(int sayi) {
	bool asalSayiMi = true;
	if (sayi <= 1) {
		asalSayiMi = false;
	} else if(sayi > 1){
		for (int i = 2; i * i <= sayi; i++) {
			
			if (sayi % i == 0) {
				asalSayiMi = false;
				break;
			} 
		}
	}
	
	return asalSayiMi;
}
void toString() {
	int sayi = Input();
	bool asalMi = asalSayiMi(sayi);
	if (asalMi == true) {
		cout << sayi << ", asal say�d�r." << endl;
	}
	else {
		cout << sayi << ", asal say� de�ildir" << endl;
	}
}
int main() {
	while (true) {
		toString();
	}
	
	return 0;
}

