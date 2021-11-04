#ifndef INTEGER_SOURCE_H
#define INTEGER_SOURCE_H

class Source {

public:
    Source();
    virtual ~Source();
    virtual int next() = 0;

    int countNext();

    static void printCounter();
    static void resetCounter();

    static int nb_call_to_next;

};

#endif