#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string tab[100];
    string a;
    ifstream plik;
    int licznik=0;

    plik.open("dane.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje";
        exit(0);
    }

    if(plik.good())
        while(!plik.eof())
            {
                getline(plik, a);
                plik>>tab[licznik];
                licznik++;
            }

    plik.close();
    
    for(int i=0; i<licznik; i++)
    {
        cout<<tab[i]<<endl;
    }

    return 0;
}