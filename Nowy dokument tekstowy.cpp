#include <iostream>
#include <fstream>
#include <string> 
#include <ctime>
#include <stdlib.h>
using namespace std;

int main() {
    int t[100];
    int ilosc=0;
    int a=0;
    bool tak = true;
    int dupa;
    int max;
    srand( time( NULL ) );
    ifstream wejscie;

    ofstream wyjscie;
    wejscie.open("wej.txt");
    wyjscie.open("wyj.txt");
    while(wejscie.good()) {
                if (!wejscie.eof()) {

                    wejscie >> t[ilosc];
                    ilosc++;
                }
            }



            while(tak==true){
                tak = false;
                for (int i =0;i <=ilosc-1;i++ ){

                    if (t[i]<=t[i+1]){


                    }else{
                        tak=true;

                        dupa=t[i];
                        t[i]=t[i+1];
                        t[i+1]= dupa;
                    }
                }

        }
         max = t[ilosc];
        wyjscie << "{"max":"<<max<<","losowa_ocena":"<<rand()%max<<"}";

    return 0;
}