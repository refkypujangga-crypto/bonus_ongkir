#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputkodepremium;
    int inputbelanjaan, ongkir, pilihankurir, total, kurir;
    cout << "masukan kode premium jika ada, jika tidak ada silahkan enter (";
    cin >> inputkodepremium;
    cout << "pilih belanjaan anda (ketik 1,2,3,4)\n1. minyak\n2. gula\n3. kopi\n4. garam\n(";
    cin >> inputbelanjaan;
    cout << "pilih kurir (ketik 1,2)\n1. kurir kilat\n2. ambil sendiri\n(";
    cin >> pilihankurir;
    int s1 = 200000;
    int s2 = 50000;
    int minyak = 500000;
    bool s1minyak = minyak >= s1;
    bool s2minyak = minyak > s2 && minyak < s1;
    int gula = 200000;
    bool s1gula = gula >= s1;
    bool s2gula = gula > s2 && gula < s1;
    int kopi = 100000;
    bool s1kopi = kopi >= s1;
    bool s2kopi = kopi > s2 && kopi < s1;
    int garam = 10000;
    bool s1garam = garam >= s1;
    bool s2garam = garam > s2 && garam < s1;
    bool kodepremium = inputkodepremium == "7262";
    int ongkirnormal = 20000;
    switch (inputbelanjaan){
        case 1: if (kodepremium){
            ongkir = ongkirnormal - ongkirnormal;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = minyak + kurir;
        }
        else if (s1minyak){
            ongkir = ongkirnormal - ongkirnormal;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = minyak + kurir;
        }
        else if (s2minyak){
            ongkir = ongkirnormal - 5000;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = minyak + kurir;
        }
        else{
            switch (pilihankurir){
                case 1: kurir = ongkirnormal + 10000;
                break;
                case 2: kurir = ongkirnormal + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = minyak + kurir;
        };
        break;
        case 2: if (kodepremium){
            ongkir = ongkirnormal - ongkirnormal;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = gula + kurir;
        }
        else if (s1gula){
            ongkir = ongkirnormal - ongkirnormal;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = gula + kurir;
        }
        else if (s2gula){
            ongkir = ongkirnormal - 5000;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = gula + kurir;
        }
        else{
            switch (pilihankurir){
                case 1: kurir = ongkirnormal + 10000;
                break;
                case 2: kurir = ongkirnormal + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = gula + kurir;
        };
        break;
        case 3: if (kodepremium){
            ongkir = ongkirnormal - ongkirnormal;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = kopi + kurir;
        }
        else if (s1kopi){
            ongkir = ongkirnormal - ongkirnormal;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = kopi + kurir;
        }
        else if (s2kopi){
            ongkir = ongkirnormal - 5000;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = kopi + kurir;
        }
        else{
            switch (pilihankurir){
                case 1: kurir = ongkirnormal + 10000;
                break;
                case 2: kurir = ongkirnormal + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = kopi + kurir;
        };
        break;
        case 4: if (kodepremium){
            ongkir = ongkirnormal - ongkirnormal;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = garam + kurir;
        }
        else if (s1garam){
            ongkir = ongkirnormal - ongkirnormal;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = garam + kurir;
        }
        else if (s2garam){
            ongkir = ongkirnormal - 5000;
            switch (pilihankurir){
                case 1: kurir = ongkir + 10000;
                break;
                case 2: kurir = ongkir + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = garam + kurir;
        }
        else{
            switch (pilihankurir){
                case 1: kurir = ongkirnormal + 10000;
                break;
                case 2: kurir = ongkirnormal + 0;
                break;
                default: cout << "tidak ada pilihan";
                return 0;
            }
            total = garam + kurir;
        };
        break;
        default: cout << "tidak ada pilihan";
        return 0;
    }
    cout << "total biaya = " << total << endl;
    return 0;
}
