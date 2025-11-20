#include<iostream>
using namespace std;

int main() {
    int  nomer;

    int P, L, T, S, R;
    int pilihan;
    cout << "   --------------- pilihan ---------------" << endl<<endl;
    cout << "no 11 = untuk bangun datar" << endl;
    cout << "no 22 = untuk bangun ruang" << endl<<endl;
    cout<<"Masukan nomor pilihan : ";
    cin >> nomer;
    if( nomer == 11) {
        cout << "         -----pilih nomer------" << endl;
        cout << " no 1 = menghitung keliling persegi panjang" << endl;
        cout << " no 2 = menghitung luas persegi panjang"<<endl;
        cout << " no 3 = menghitung keliling persegi"<<endl;
        cout << " no 4 = menghitung luas persegi" << endl;
        cout << " no 5 = menghitung keliling belah ketupat" << endl<<endl;
        cout<<"Masukan nomor pilihan : ";
        cin >>nomer;
        if( nomer ==1) {
            int P, L, T,S;
            cout << "                          " << endl;
            cout <<" ----menghitung keliling persegi panjang----" << endl << endl;
            cout<<"Rumus menghitung keliling persegi panjang adalah 2×(P+L)"<<endl<<endl;
            cout << "masukan panjang : ";
            cin>>P;
            cout << "masukan lebar ; ";
            cin>>L;
            cout<<endl;
            cout << "---- hasil dari perhitungan adalah  = " << 2*(P+L)<<endl;
        } else if( nomer== 2) {
            cout << "                           " << endl;
            cout << "  -----menghitung luas persegi panjang-----" << endl <<endl;
            cout<<"Rumus menghitung luas persegi adalah (P×L)"<<endl<<endl;
            cout << "masukan panjang : " ;
            cin>> P;
            cout << "masukan lebar : " ;
            cin>> L;
            cout<<endl;
            cout << "---- hasil dari perhitungan adalah = " << (P*L)<<endl;
        } else if ( nomer==3) {
            cout << "                           " << endl;
            cout << "    -----menghitung keliling persegi-----" << endl <<endl;
            cout<<"Rumus menghitung keliling persegi adalah 4×s"<<endl<<endl;
            cout << "masukan sisi : ";
            cin >> S;
            cout<<endl;
            cout << " ----hasil dari perhitungan adalah = " << 4*S<<endl;
        } else if ( nomer==4) {
            cout << "                           " << endl;
            cout << "    -----menghitung luas persegi-----" << endl <<endl;
            cout<<"Rumus menghitung luas persegi adalah s×s"<<endl<<endl;
            cout << "masukan sisi : " ;
            cin>>S;
            cout<<endl;
            cout << " ----hasil dari perhitungan adalah = " << S*S <<endl;
        } else if ( nomer==5) {
            cout << "                           " << endl;
            cout << " -----menghitung keliling belah ketupat-----" << endl <<endl;
            cout<<"Rumus menghitungg keliling belah ketupat adalah 4×s"<<endl<<endl;
            cout << "masukan sisi : ";
            cin>> S;
            cout<<endl;
            cout << "  -----hasil dari perhitungan adalah = " <<4*S<<endl;
        }
        else {
            cout<<endl;
            cout<<"tolong masukan nomor sesuai petunjuk";
            cout<<endl;
        }
    } else if(nomer==22) {
        int P, L, T, R;
        cout << "       ------plih nomer-----" << endl;
        cout << " no 1 = menghitung luas balok"<<endl;
        cout << " no 2 = menghitung volume balok" << endl;
        cout << " no 3 = menghitung keliling balok" << endl;
        cout << " no 4 = menghitung luas permukaan kubus" << endl;
        cout << " no 5 = menghitung volume kubus" << endl;
        cout<<"Masukam nomer pilihan : ";
        cin >>nomer;
        if ( nomer==1) {
            cout << "                            " << endl;
            cout << "  ----menghitung luas balok----" << endl <<endl;
            cout<<"Rumus menghitung luas balok adalah  2×(P×L)+(P×T)+(L×T)"<<endl<<endl;
            cout << "masukan panjang : " ;
            cin>>P;
            cout << "masukan lebar : " ;
            cin>>L;
            cout << "masukan tinggi : " ;
            cin>>T;
            cout<<endl;
            cout << "  ----hasil dari perhitungan adalah = " << 2*(P*L)+(P*T)+(L*T)<<endl;
        } else if( nomer == 2) {
            cout << "                             " << endl;
            cout << "      ----menghitung volume balok----" << endl <<endl;
            cout<<"Rumus menghitung volume balok adalah (P×L×T)"<<endl<<endl;
            cout << "masukan panjang : ";
            cin>> P;
            cout << "masukan lebar : ";
            cin >> L;
            cout << "masukan tinggi ; ";
            cin>>T ;
            cout<<endl;
            cout << "  ----hasil dari perhitungan adalah = " <<(P*L*T)<<endl;
        } else if( nomer==3) {
            cout << "                              " << endl;
            cout << "    ----menghitung keliling balok-----" << endl <<endl;
            cout<<"Rumus menghitung keliling balok adalah 4×(P+L+T)"<<endl<<endl;
            cout << " masukan panjang : ";
            cin >> P;
            cout << " masukan lebar : ";
            cin >> L;
            cout << " masukan tinggi : ";
            cin >> T;
            cout<<endl;
            cout << "   ----hasil dari perhitungan adalah = " << 4*(P+L+T) << endl;
        } else if( nomer==4) {
            cout << "                             " << endl;
            cout << "   -----menghitung luas permukaan kubus-----" << endl <<endl;
            cout<<"Rumus menghitung luas permukaan kubus adalah 4×(R×R)"<<endl<<endl;
            cout << "masukan rusuk : ";
            cin>> R;
            cout<<endl;
            cout << "  -----hasil dari perhitungan adalah = " <<4*(R*R) <<endl;
        } else if( nomer==5) {
            cout << "                             " << endl;
            cout << "    -----menghitung volume kubus-----" << endl <<endl;
            cout<<"Rumus menghitung volume kubus adalah  (R×R×R)"<<endl<<endl;
            cout << "masukan rusuk : ";
            cin>> R;
            cout<<endl;
            cout << "   -----hasil dari perhitungan adalah = " <<(R*R*R) <<endl;
        }
        else {
            cout<<endl;
            cout<<"tolong masukan nomor sesuai petunjuk";
            cout<<endl;
        }
    }
    else {
        cout<<endl;
        cout<<"tolong masukan 11 atau 22 sesuai Petunjuk";
        cout<<endl;
    }
}




