#ifndef REKURZIJA_H
#define REKURZIJA_H
#include<iostream>
#include<stdlib.h>
using namespace std;


class Rekurzija {
    private:
        int x;
        int y;
        int z;


    public:
        Rekurzija () {x=0;};
        int get ();
        void set (int a, int b, int c);


};

int Rekurzija::get () {
return (x);
}

void Rekurzija::set (int a, int b, int c) {
x=a;
y=b;
z=c;
}

#endif
