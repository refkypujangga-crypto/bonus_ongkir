#include <iostream>
using namespace std;
int main() {
    int total_belanja, pilihan_kurir, input_kode_premium, ongkir_yang_didapatkan, total;
    int kode_premium = 7262;
    int potongan_ongkir_1 = 20000;
    int potongan_ongkir_2 = 5000;
    int minyak = 500000;
    int gula = 300000;
    int kopi = 200000;
    int garam = 100000;
    int masako = 30000;
    int ongkir_normal = 20000;
    int kurir_kilat = 10000;
    int ambil_sendiri = 0;
    cout << "pilih belanjaan (input nomor belanjaan):\n 1. minyak\n 2. gula\n 3. kopi\n 4. garam\n 5. masako\n: ";
    cin >> total_belanja;
    cout << "masukan kode premium jika ada, jika tidak ada masukan tidak ada: ";
    cin >> input_kode_premium;
    cout << "pilihan kurir (input nomor):\n 1. kilat\n 2. ambil sendiri\n: ";
    cin >> pilihan_kurir;
    
    switch (total_belanja){
        
        // Minyak
        case 1: if (input_kode_premium == kode_premium){
            ongkir_yang_didapatkan = ongkir_normal - potongan_ongkir_1;
            switch (pilihan_kurir){
                case 1: ongkir_yang_didapatkan + kurir_kilat;
                break;
                case 2: ongkir_yang_didapatkan + ambil_sendiri;
                break;
                default: cout << "kurir tidak dikenal";
            total = minyak + ongkir_yang_didapatkan;
            }
        }
        //syarat 1
        else if (minyak >= 200000){
            ongkir_yang_didapatkan = ongkir_normal - potongan_ongkir_1;
            switch (pilihan_kurir){
                case 1: ongkir_yang_didapatkan + kurir_kilat;
                break;
                case 2: ongkir_yang_didapatkan + ambil_sendiri;
                break;
                default: cout << "kurir tidak dikenal";
            total = minyak + ongkir_yang_didapatkan;
            }
        }
        // syarat 2
        else if (minyak > 50000 && minyak < 200000){
            ongkir_yang_didapatkan = ongkir_normal - 5000;
            switch (pilihan_kurir){
                case 1: ongkir_yang_didapatkan + kurir_kilat;
                break;
                case 2: ongkir_yang_didapatkan + ambil_sendiri;
                break;
                default: cout << "kurir tidak dikenal";
            total = minyak + ongkir_yang_didapatkan;
            }
        }
        else{
            switch (pilihan_kurir){
                case 1: ongkir_normal + kurir_kilat;
                break;
                case 2: ongkir_normal + ambil_sendiri;
                break;
                default: cout << "kurir tidak dikenal";
            total = minyak + ongkir_normal;
            }
        }
        break;
        case 2: "belum ada";
        break;
        default: "barang belanjaan tidak ada";
    }
    cout << "total : " << total;
    return 0;
}
