// Imie nazwisko, grupa(specjalnosc), nr. indeksu

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
  cout<<"Program pobiera informacje od studenta i zapisuje je do pliku"<<endl;

  ofstream plik("student-info.txt");
  string imie, nazwisko;
  int nr_indeksu;

  cout<<"imie: "; cin>>imie;
  cout<<"nazwisko: "; cin>>nazwisko;
  cout<<"nr. indeksu: "; cin>>nr_indeksu;

  plik<<imie<<" "<<nazwisko<<", "<<nr_indeksu<<endl;
  plik.close();
  return 0;
}


