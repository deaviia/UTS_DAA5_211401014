#include <iostream>
#include <string>


using namespace std;

struct data_pakaian{
    string kode_pakaian;
    string nama_pakaian;
    int harga;
};

// syntax program yang akan menjalankan program
int main()
{
    string jenis, code;
    data_pakaian pakaian;
    string kode_pakaian[4]={"1", "2", "3", "4"};
    string nama_pakaian[4]={"Hijab", "Celana", "Rok", "Gamis"};
    int jml_barang,jml_uang, kembali, total=0;
    float pcs, harga, uang;

    cout << "======================================="<<endl;
    cout << "\tSelamat Datang di BOUTIQUE  "<<endl;
    cout << "\t  Jalan Jendral Sudirman"<<endl;
    cout << "======================================="<<endl;
    cout << "Menu Utama : "<<endl;
    cout << "Kode        Jenis         Harga "<<endl;
    cout << "---------------------------------------"<<endl;
    cout << " 1          Hijab       Rp. 12.500"<<endl;
    cout << " 2          Celana      Rp. 120.000"<<endl;
    cout << " 3          Rok         Rp. 65.500"<<endl;
    cout << " 4          Gamis       Rp. 240.000"<<endl;
    cout << "---------------------------------------"<<endl;

    cout << "Kode Pakaian  : "; cin >> pakaian.kode_pakaian;
    if (pakaian.kode_pakaian == "1"){
        cout << "Jenis Pakaian : "<<nama_pakaian[0]<<endl;
        cout << "Rp. 12.500/pcs";
        jenis = "Hijab";
        harga = 12500;
      
    }
    else if (pakaian.kode_pakaian == "2"){
        cout << "Jenis Pakaian : "<<nama_pakaian[0]<<endl;
        cout << "Rp. 120.000/pcs";
        jenis = "Celana";
        harga = 120000;
        
    }
    else if (pakaian.kode_pakaian == "3"){
        cout << "Jenis Pakaian : "<<nama_pakaian[0]<<endl;
        cout << "Rp. 65.500/pcs";
        jenis = "Rok";
        harga = 65500;
    }
    else if (pakaian.kode_pakaian == "4"){
        cout << "Jenis Pakaian : "<<nama_pakaian[0]<<endl;
        cout << "Rp. 240.000/pcs";
        jenis = "Gamis";
        harga = 240000;
    }
    else {
        cout << "Maaf kode yang anda masukkan salah!";
    }
        cout << endl;
        cout << "Jumlah Barang Yang Dibeli       : "; cin >> jml_barang;
        cout << "Bayar                           : "; cin >> jml_uang;
        total = jml_barang*harga;
        pcs = jml_barang;
        kembali = jml_uang - total;
       

    cout << "                   -BOUTIQUE-                        "<<endl;
    cout << "            -Jalan Jendral Sudirman-          "<<endl;
    cout << "                -Telp 0281 643663-                    "<<endl;
    cout << "------------------------------------------------------"<<endl;
    
  
    cout << "Jenis Pakaian  : "<<jenis<<endl;
    cout << "Jumlah Barang  : "<<pcs<<endl;
    cout << "Harga/pcs      : Rp. "<<harga<<endl;
    cout << "Total          : Rp. "<<total<<endl;
    cout << "Bayar          : Rp. "<<jml_uang<<endl;
    cout << "Kembalian      : Rp. "<<kembali<<endl;
    cout << "======================================================"<<endl;
    
   
    cout << "        TERIMA KASIH SUDAH BELANJA DI TOKO KAMI         ";

    return 0;
}
