#include <iostream>
#include <string>

using namespace std;
struct data {
	string nama[50];
	string nim[10];
	string jurusan[50];
};
int main (){
	int n;
    data mahasiswa;
	
	
	cout << "Masukan Banyak Data : "; //program bubble sort ascending
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cout << endl;
		cout << "Data Mahasiswa Ke-" <<i+1<< " "<<endl;
		cout << "Nama    : ";
		cin >> mahasiswa.nama[i];
	 
		cout << "NIM     : ";
		cin >> mahasiswa.nim[i];
	 
		cout << "Jurusan : ";
		cin >> mahasiswa.jurusan[i]; 
		}
	
	for (int i=1; i<n; i++) {
		for (int j=n-1; j>=i; j--) {
			if (mahasiswa.nim[j] < mahasiswa.nim[j-1]) {
				swap (mahasiswa.nama[j], mahasiswa.nama[j-1]);
				swap (mahasiswa.nim[j], mahasiswa.nim[j-1]);
				swap (mahasiswa.jurusan[j], mahasiswa.jurusan[j-1]);
			}
		}
	}
	
	cout<<endl;
	for (int i=0; i<n; i++) {
	    	cout << endl;
	    	
	    	cout << "DATA MAHASISWA " <<i+1 <<endl; 
			cout << "------------------------------"<<endl;
			cout << "Nama     : "<<mahasiswa.nama[i]<<endl;
			cout << "NIM      : "<<mahasiswa.nim[i]<<endl;
			cout << "Jurusan  : "<<mahasiswa.jurusan[i]<<endl;

	}
	return 0;
}

