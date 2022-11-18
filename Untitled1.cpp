#include<iostream>
using namespace std;

int main(){
	
	char respon;
	
	ulang:
	
	cout << "Apakah Anda mau membeli produk ini? (Y/T) : "; cin >> respon;
	
	if (respon=='Y'){
		cout << endl << "Terimakasih telah belanja di toko kami";
	}
	else {
		goto ulang;
	}
	
	return 0;
}
