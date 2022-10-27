#include "matematyka.h"

int Mate::liczba_pierwsza(int jeden){

    for(int i=2; i*i <= jeden; i++){
        if(jeden%i == 0){
            return 0;
        }
    }

    return 1;
}

double Mate::rad(int x){
    return( x*3.14)/180;


}
double Mate::tru(int a, int h){
    double pole=0;
    pole=0.5*a*h;
    return pole;
}
