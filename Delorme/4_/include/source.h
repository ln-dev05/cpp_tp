#ifndef INTEGER_SOURCE_H
#define INTEGER_SOURCE_H

class Source {
public:
    Source();
    virtual ~Source();
    virtual int next() = 0;
};

#endif