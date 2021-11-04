#if !defined(H_INTSOURCE)
#define H_INTSOURCE

class IntSource
{
private:
    static int _next_value_usage;
public:
    static void RESET_NEXT_VALUE_USAGE() { IntSource::_next_value_usage = 0; };
    static int GET_NEXT_VALUE_USAGE() { return IntSource::_next_value_usage; };
    static void INC_NEXT_VALUE_USAGE() { IntSource::_next_value_usage++; };
    IntSource();
    IntSource(IntSource&) = delete;
    virtual int next_value() = 0;
    virtual ~IntSource();
};


#endif // H_INTSOURCE
