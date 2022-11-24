#include <iostream>
#include <queue>
#define max 5
using namespace std; 
string data[max];

int main()
{
    // Antrian diPos
    queue<int>q;
    int a[10], b=0, c;
    cout << "PROGRAM ANTRIAN KANTOR POS\n";
    cout << "--------------------------------";
    cout << endl;
    cout << "Input Banyak Nomor Antrian: ";cin >> c;
    for(int i=0; i<c; i++){
        cout << "Masukan Nomor Antrian: ";cin >> a[i];
    	q.push(a[i]);
	}
    cout << endl;
	cout << "Urutan Antrian Yang Dipanggil: "<< endl; 
 
    // Printing content of queue
    while (!q.empty()) {
        cout << " " << q.front(); //nampilkan yg paling atas
        q.pop(); //data yg sudah diambil dibuang
    }
    
}
