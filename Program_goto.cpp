#include<iostream>
using namespace std;

int main(){
	
	string password,key;
	int a;
	password = "ayampokpok";
	
	uwu:
	
	cout << "Please enter the PASSWORD for the secret formula : " ; cin >> key;
	
	if (key==password){
		cout << endl << "Here is the secret formula" << endl <<"It's a bit of LOVE AND AFFECTION <3";
	}
	else{
		a++;
		if(a==5){
			cout << endl << "YOU ALREADY USE ALL 5 TRY, Try again next time!!";
		}
		else{
			goto uwu;
		}
		
	}
	
	return 0;
}
