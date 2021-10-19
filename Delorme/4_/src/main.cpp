#include "iostream"
#include "sieve.h"
#include "counter.h"
#include "multipleFilter.h"


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
        Source * filtre1 = new MultipleFilter(new Counter(), 2);
        Source * filtre2 = new MultipleFilter(filtre1, 5);

        for (int i = 0; i < 20; i++) {
            cout << filtre2->next() <<endl;
        }

        delete filtre2;
        // attention à ne pas delete filtre1, car il est déjà delete lors de la déconstruction du filtre 2
    }   

    if (false) {
        Source * sieve = new Sieve(new Counter());
        int val;

        do {
            val = sieve->next();  
            cout << val << endl;  
        } while (val < 7000);

        delete sieve;
    }
}