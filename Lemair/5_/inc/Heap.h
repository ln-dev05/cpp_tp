#if !defined(HEAP_H)
#define HEAP_H

#include <iostream>

#define LEFT_CHILD(x) x << 1
#define RIGHT_CHILD(x) (x << 1) + 1

template<typename T, typename C>
class Heap {
   public:
    Heap(unsigned int capacity);
    ~Heap();
    bool isEmpty() const;
    bool isFull() const;
    T top() const;
    void add(T x);
    void pop();
    Heap(const Heap&) = delete;
    Heap& operator=(const Heap&) = delete;
    std::ostream & print(std::ostream & out) const;
   private:
    inline void swap(unsigned int i, unsigned int j);
    T* _array;
    unsigned int _capacity;
    unsigned int _size;
    C _comparator;
};

template <typename T, typename C>
Heap<T, C>::Heap(unsigned int capacity) {
    if (capacity) {
        _capacity = capacity;
        _array = new T[capacity+1]();
        _size = 0;
    } else {
        throw "Creation of useless heap";
    }
}

template <typename T, typename C>
Heap<T, C>::~Heap() {
    delete[] _array;
}

template <typename T, typename C>
bool Heap<T, C>::isEmpty() const {
    return _size == 0;
}

template <typename T, typename C>
bool Heap<T, C>::isFull() const {
    return _size == _capacity;
}

template <typename T, typename C>
T Heap<T, C>::top() const {
    if (_capacity && !isEmpty()) {
        return _array[1];
    } else {
        throw "No element on top";
    }
}

template <typename T, typename C>
void Heap<T, C>::add(T x) {

    if (_size < _capacity) {
        ++_size;
        _array[_size] = x;
        unsigned int current_id = _size;
        while (current_id > 1 
              && _comparator(_array[current_id], _array[current_id/2])) {
            swap(current_id, current_id/2);
            current_id/=2;
        }
    } else {
        throw "Not enough space";
    }
}

template <typename T, typename C>
void Heap<T, C>::pop() {

    if (isEmpty()) {
        throw "No element on top";
    }

    unsigned int current_id = 1;
    _array[current_id] = _array[_size--];

    while (LEFT_CHILD(current_id) <= _size) {        
        if (RIGHT_CHILD(current_id)  <= _size) {
            unsigned int max = 2 * current_id;
            max += _comparator(_array[RIGHT_CHILD(current_id)], _array[LEFT_CHILD(current_id)]);
            if (_comparator(_array[max], _array[current_id])) {
                swap(current_id, max);
                current_id = max;
                continue;
            }
        }

        if (_comparator(_array[LEFT_CHILD(current_id)], _array[current_id])) {
            swap(current_id, LEFT_CHILD(current_id));
            current_id = LEFT_CHILD(current_id) ;
            continue;
        }
        break;
    }
}

template <typename T, typename C>
std::ostream& Heap<T, C>::print(std::ostream& out) const {
    int profondeur = 0;
    out << "Printing heap :" << std::endl;
    for (int i = 1; i < _size+1; ++i) {
        if (i==1<<profondeur) {
            out << "" << std::endl;
            ++profondeur;
        }
        out << _array[i] << " ";
    }
    out << "" << std::endl;
    return out;
}

template <typename T, typename C>
void Heap<T, C>::swap(unsigned int i, unsigned int j) {
    T tmp = _array[j];
    _array[j] = _array[i];
    _array[i] = tmp;
}

template <typename T, typename C>
void heapSort(T * array, const unsigned int size) {
    try {
        Heap<T, C> heap(size);
        for (int i = 0; i < size; ++i) {
            heap.add(array[i]);
        }
        for (int i = 0; i < size; ++i) {
            array[i] = heap.top();
            heap.pop();
        }
    } catch(const char* & e) {
        std::cerr << e << '\n';
    }
}

#endif // HEAP_H