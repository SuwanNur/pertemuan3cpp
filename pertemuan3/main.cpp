#include <iostream>

using namespace std;
//tipe data fungsi, nama fungsi (parameter)
int max (int a, int b){
    if(a > b){
        cout<<a<<endl;
        return a;
}else if(a < b){
        cout<<b<<endl;
        return a;
}
}
/*int main()
{
    int x=0;
    string nama;

    cout<<"Isi Berapa kali mau di ulang:";
    cin>> x;

    int i=0;
    while(i<x){
        cout<<"Masukkan Nama:";
        i++;
    }
    cout<<"Masukkan Nama:";
    cin>> nama;
    for (int i = 0; i < x; i++) {
    cout <<nama<< endl;
  }

    int y;
    y=5;
    if(x > y){
        cout<<"X lebih dari y" <<endl;
    }else if(x < y){
        cout << "X kurang dari y" << endl;
    }else{//atau bisa menggunakan else if(x ==y)
        cout << "X kurang dari y" << endl;


    int x = 5;
    int y= 10;

    if (x > y){
        cout<< x << "Lebih Dari " << y <<endl;
    }else if(x < y){
        cout<< x << "Kurang Dari " << y <<endl;
    }else{//atau bisa menggunakan else if(x ==y)
        cout << x <<"Sama Dengan " << y << endl;
    }
    }
    int x = 5;
    int y= 10;

    for (int i =0; i<10; i++){
        x++;
        y++;
        max(x,y);
    }

    #include <stdio.h>

// Fungsi untuk mencari nilai terkecil dari dua bilangan bulat
int cari_terkecil(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}*/

int main() {
    int x, y; // Deklarasi dua variabel bilangan bulat

    // Assign nilai ke x dan y
    x = 10;
    y = 20;

    // Panggil fungsi cari_terkecil
    int terkecil = cari_terkecil(x, y);

    // Cetak hasil
    printf("Nilai terkecil adalah: %d\n", terkecil);

    return 0;
}
  return 0;
}
