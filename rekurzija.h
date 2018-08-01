#ifndef REKURZIJA_H
#define REKURZIJA_H
#include<iostream>
#include<stdlib.h>
#include<cmath> // Ukljucili smo ovu biblioteku
using namespace std;


class Rekurzija {
    private:
        int u;  //Ovdje sam mijenjao
        int y;
        int z;


    public:
        Rekurzija () {u=0;};   // Ovdje sam mijenjao
        int get ();
        void set (int a, int b, int c);


};

int Rekurzija::get () {
return (u);   // Ovjde sam mijenjao
}

void Rekurzija::set (int a, int b, int c) {
u=a;         // Ovdje sam mijenjao
y=b;
z=c;
}

#endif
