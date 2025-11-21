#include<iostream>
using namespace std;

int main()
{
int no,alfa,tlp,hari,uang;
string nama;
cout << "       RENTAL KENDARAAN FINZ STUDENT" << endl;
cout << "---------------------------------------------" << endl<<endl;
cout << "Jenis kendaraan" << endl<<endl;
cout << "10.motor" << endl;
cout << "20.Mobil" << endl;
cout << "Masukan nomer kendaraan : ";
cin >>no;
if(no==10) {
cout << "             RENTAL MOTOR" << endl;
cout << "1. motor vario RP 60.000/hari" << endl;
cout << "2. motor vesmet RP 150.000/hari" << endl;
cout << "3. motor tmax RP  200.000/hari" << endl;
cout << "4. motor beat RP 50.000/hari" << endl;
cout << "5. motor xmax RP 250.000/hari" << endl;
cout << "masukan nomor motor : ";
cin >> alfa;

if(alfa==1) {
 cout << "=============================================" << endl;
cout << "MOTOR VARIO" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << " No telephone : ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >>hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*60000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*60000<<endl;
cout << "=============================================" << endl;
}
 else if (alfa==2) {
 cout << "=============================================" << endl;
cout << "MOTOR Vesmet" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone : ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*150000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*150000<<endl;
cout << "=============================================" << endl;
}
else if(alfa==3) {
 cout <<endl;
cout << "=============================================" << endl; 
cout << "MOTOR TMAX" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone: ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*200000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*200000<<endl;
cout << "=============================================" << endl;
}
else if(alfa==4) {
 cout << "=============================================" << endl;
cout << "MOTOR BEAT" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone: ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*50000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*50000<<endl;
cout << "=============================================" << endl;
}
else if (alfa==5) {
 cout << "=============================================" << endl;
cout << "MOTOR XMAX" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone: ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*250000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*250000<<endl;
cout << "=============================================" << endl;
}
}
if(no==20) {
cout << "             RENTAL MOBIL" << endl;
cout << "1. mobil Brio RP 250.000/hari" << endl;
cout << "2. mobil Civic RP 300.000/hari" << endl;
cout << "3. mobil Xpander RP  300.000/hari" << endl;
cout << "4: mobil Avanza RP 100.000/hari" << endl;
cout << "5. mobil Tesla RP 500.000/hari" << endl;
cout << "masukan huruf motor : ";
cin >> alfa;
 if (alfa==1) {
 cout << "=============================================" << endl;
cout << "MOBIL BRIO" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone : ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*250000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*250000<<endl;
cout << "=============================================" << endl;
}
else if (alfa==2) {
 cout << "=============================================" << endl;
cout << "MOBIL CIVIC" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone: ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*300000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*300000<<endl;
cout << "=============================================" << endl;
}
else if (alfa==3) {
 cout << "=============================================" << endl;
cout << "MOBIL XPANDER" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone: ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*300000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*300000<<endl;
cout << "=============================================" << endl;
}
else if (alfa==4) {
 cout << "=============================================" << endl;
cout << "MOBIL AVANZA" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone: ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*100000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*100000<<endl;
cout << "=============================================" << endl;
}
else if (alfa==5) {
 cout << "=============================================" << endl;
cout << "MOBIL CIVIC" << endl;
cout << "=============================================" << endl;
cout << "Nama penyewa : ";
cin >> nama;
cout << "No telephone : ";
cin>>tlp;
cout<<"lama sewa/hari : ";
cin >> hari;
cout << "=============================================" << endl;
cout << "Nama penyewa : "<<nama<<endl;
cout << "No : "<<tlp<<endl;
cout<<"lama sewa/hari : "<<hari<<endl;
cout << "total bayar : " << hari*500000<<endl;
cout << "=============================================" << endl;
cout << "uang pembayaran : ";
cin >> uang;
cout << "kembalian : " << uang-hari*500000<<endl;
cout << "=============================================" << endl;
}
}



}

