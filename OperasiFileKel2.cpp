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
//Nyatakan variabel integer "b" dan "c" dengan indeks 100. Nyatakan juga variabel integer "n".
//Nyatakan variabel char "a" dan "npm" dengan indeks 1000 dan 30.
 cout<<"Masukan banyak data yang ingin diinput: ";
 cin>>n;
//Gunakan variabel "n" untuk menyimpan data input user.
 cout<<endl<<endl;

//Nyatakan perulangan berikut:
 for (int i=0;i<n;i++){
    //Nyatakan untuk sebuah variabel integer "i" bernilai 0 yang bersifat increment hingga nilai "i" 
    //kurang dari "n", cetak:
  cout<<"Data ke-"<<i+1<<endl;
  //
  cout<<"Masukan Nama\t: ";
  scanf(" %[^\n]s",a[i]);
  cout<<"Masukkan NPM\t: ";
  scanf(" %[^\n]s",npm[i]);
  cout<<"Masukan Nilai UTS\t: ";
  cin>>b[i];
  cout<<"Masukan Nilai UAS\t: ";
  cin>>c[i];
 }
 system("CLS");
 cout<<"Output:\n\n";
 cout<<"=======================================================================\n";
 cout<<"|  No  |           Nama           |    NPM    | Nilai UTS | Nilai UAS |\n";
 cout<<"=======================================================================\n";
 for(int i=0;i<n;i++){
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(25)<<a[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(10)<<npm[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(10)<<b[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(10)<<c[i]<<"|";
  cout<<"\n=======================================================================\n";
 }
}