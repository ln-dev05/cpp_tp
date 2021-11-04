#if !defined(H_INTSOURCE)
#define H_INTSOURCE

class IntSource
{
private:
public:
    IntSource();
    IntSource(IntSource&) = delete;
    virtual int next_value() = 0;
    virtual ~IntSource();
};


#endif // H_INTSOURCE
