#include<iostream>
using namespace std;

	void absen(string nama,int NPM){
		cout << nama << "-" << NPM ; 
	}
int main(){
	string nama;
	int NPM;
	 
	
	getline(cin,nama);
	cin >> NPM;
	
	absen(nama, NPM);
	
	return 0;
}
