#include "iostream"
#include "sieve.h"
#include "counter.h"
#include "multipleFilter.h"
#include "lastDigitSegregation.h"


using namespace std;

int main(void) {


    if (false) {

        // 20 premier nombres impairs
        Source * filtre = new MultipleFilter(new Counter(), 2);

        for (int i = 0; i < 20; i++) {
            cout << filtre->next() <<endl;
        }

        delete filtre;
    }

    if (false) {

        //nombre inférieurs à 30 qui ne sont ni pair ni multiple de 5
        Source * filtre = new MultipleFilter(new MultipleFilter(new Counter(), 2), 5);

        for (int i = 0; i < 20; i++) {
            cout << filtre->next() <<endl;
        }

        delete filtre;
    }   

    if (false) {

        // Nombre premier jusqu'a 7000
        Source * sieve = new Sieve(new Counter());
        int val;

        do {
            val = sieve->next();  
            cout << val << endl;  
        } while (val < 7000);

        delete sieve;
    }

    if (true) {

        //nombre premier qui finissent par 3 et 7 
        Source * filtre = new LastDigitSegregation(new LastDigitSegregation(new Sieve(new Counter()), 3), 7);
        int val;

        do {
            val = filtre->next();
            cout << val << endl;
        } while(val < 200);

        delete filtre;
    }
}