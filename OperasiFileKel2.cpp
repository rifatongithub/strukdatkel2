//AHMAD RAFIF DHIAULHAQ (51421574)
//IMRAN RASYID (50421650)
//RIFAT HIDAYATULLAH (51421309)

//Masukkan header-header berikut.

#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

//"<iostream>" memiliki fungsi seperti cout, cin, dan endl. 
//"<stdio.h>" memiliki fungsdi seperti printf(), puts(), putchar(), scanf(), dan gets. 
//"<iomanip.h>" memiliki fungsi setw(), setfill(),  setiosflag(). 
//Gunakan namespace yang bernama "std".

//Nyatakan class utama.

int main(){
 int b[100],c[100],n;
 char a[1000][30], npm[1000][30];
//Deklarasikan variabel integer "b" dan "c" dengan indeks 100. Deklarasikan juga variabel integer "n".
//Deklarasikan variabel char "a" dan "npm" dengan indeks 1000 dan 30.
 cout<<"Masukan banyak data yang ingin diinput: ";
 cin>>n;
//Gunakan variabel "n" untuk menyimpan data input user.
 cout<<endl<<endl;

//Nyatakan perulangan berikut:
 for (int i=0;i<n;i++){
    //Nyatakan untuk sebuah variabel integer "i" bernilai 0 yang bersifat increment hingga nilai "i" 
    //kurang dari "n", lakukan:
  cout<<"Data ke-"<<i+1<<endl;
  //Cetak "Data ke-" dengan variabel "i" yang ditambah satu.
  cout<<"Masukan Nama\t: ";
  scanf(" %[^\n]s",a[i]);
  //Cetak "Masukkan Nama: ", lalu scan input variabel "a" dengan indeks "i".
  cout<<"Masukkan NPM\t: ";
  scanf(" %[^\n]s",npm[i]);
  //Cetak "Masukkan NPM: ", lalu scan input variabel "npm" dengan indeks "i".
  cout<<"Masukan Nilai UTS\t: ";
  cin>>b[i];
  //Cetak "Masukkan Nilai UTS : ", lalu gunakan variabel "b" untuk menyimpan input user dengan indeks "i".
  cout<<"Masukan Nilai UAS\t: ";
  cin>>c[i];
  //Cetak "Masukkan Nilai UAS : ", lalu gunakan variabel "c" untuk menyimpan input user dengan indeks "i".
 }
 system("CLS");
 cout<<"Output:\n\n";
 cout<<"=======================================================================\n";
 cout<<"|  No  |           Nama           |    NPM    | Nilai UTS | Nilai UAS |\n";
 cout<<"=======================================================================\n";
 for(int i=0;i<n;i++){
  //Nyatakan perulangan: untuk sebuah variabel integer "i" bernilai 0 yang bersifat increment hingga nilai "i"
  //kurang dari "n", lakukan:
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  //Cetak "|", lalu setel rata kiri pada lebar field yang diatur melalui "setw()" dengan indeks 5.
  //Cetak "i" yang ditambah dengan 1, lalu cetak "|".
  cout<<" "<<setiosflags(ios::left)<<setw(25)<<a[i]<<"|";
  //Cetak string kosong, lalu setel rata kiri pada lebar field yang diatur melalui "setw()" dengan indeks 25.
  //Cetak "a" dengan indeks i, lalu cetak "|".
  cout<<" "<<setiosflags(ios::left)<<setw(10)<<npm[i]<<"|";
  //Cetak string kosong, lalu setel rata kiri pada lebar field yang diatur melalui "setw()" dengan indeks 10.
  //Cetak "npm" dengan indeks i, lalu cetak "|".
  cout<<" "<<setiosflags(ios::left)<<setw(10)<<b[i]<<"|";
  //Cetak string kosong, lalu setel rata kiri pada lebar field yang diatur melalui "setw()" dengan indeks 10.
  //Cetak "b" dengan indeks i, lalu cetak "|".
  cout<<" "<<setiosflags(ios::left)<<setw(10)<<c[i]<<"|";
  //Cetak string kosong, lalu setel rata kiri pada lebar field yang diatur melalui "setw()" dengan indeks 10.
  //Cetak "c" dengan indeks i, lalu cetak "|".
  cout<<"\n=======================================================================\n";
 }
}
