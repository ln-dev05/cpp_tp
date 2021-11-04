#include <fstream>
#include <iostream>
#include <string>

#include "counter.h"
#include "lastDigitSegregation.h"
#include "multipleFilter.h"
#include "sieve.h"

using namespace std;

void countCall(const char* name, const bool resetBetween) {
    ofstream file;
    file.open(name, ios::out);

    Source* sieve = new Sieve(new Counter(2));
    for (int i = 1; i < 7000; i++) {
        if (resetBetween) Source::resetCounter();

        sieve->next();

        file << i << " " << Source::nb_call_to_next << endl;
    }

    file.close();
}

int main(void) {
    if (true) {
        cout << "2O first even number" << endl;
        Source::resetCounter();
        Source* filtre = new MultipleFilter(new Counter(), 2);

        for (int i = 0; i < 20; i++) {
            cout << filtre->next() << " ";
        }

        cout << endl;
        Source::printCounter();
        delete filtre;
    }

    if (true) {
        cout << "number less than 30 that are nor 3's multple nor 5" << endl;
        Source::resetCounter();
        Source* filtre = new MultipleFilter(new MultipleFilter(new Counter(), 2), 5);

        for (int i = 0; i < 20; i++) {
            cout << filtre->next() << " ";
        }

        cout << endl;
        Source::printCounter();
        delete filtre;
    }

    if (true) {
        cout << "All prime nummber until we reach 7000" << endl;
        Source::resetCounter();
        Source* sieve = new Sieve(new Counter());
        int val;

        do {
            val = sieve->next();
            cout << val << " "; 
        } while (val < 7000);

        cout << endl;
        Source::printCounter();
        delete sieve;
    }

    if (true) {
        cout << "Prime number that end neither by 3 or 7" << endl;
        Source::resetCounter();
        Source* filtre = new LastDigitSegregation(new LastDigitSegregation(new Sieve(new Counter()), 3), 7);
        int val;

        do {
            val = filtre->next();
            cout << val << " ";
        } while (val < 200);

        cout << endl;
        Source::printCounter();
        delete filtre;
    }

    if (true) {
        cout << "Gathering data for graph..." << endl;
        Source::resetCounter();
        countCall("data1.txt", false);
        countCall("data2.txt", true);
    }

    exit(0);
}