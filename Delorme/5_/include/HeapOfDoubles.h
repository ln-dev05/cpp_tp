/**
 * @file   HeapOfDoubles.h
 * @author Sebastien Fourey
 */

class HeapOfDoubles {
public:
  HeapOfDoubles(unsigned int capacity);
  ~HeapOfDoubles();
  bool isEmpty() const;
  bool isFull() const;
  double top() const;
  void add(double x);
  void pop();

  HeapOfDoubles(const HeapOfDoubles & ) = delete;
  HeapOfDoubles & operator=(const HeapOfDoubles & ) = delete;

private:
  inline void swap(unsigned int i, unsigned int j);
  double * _array;
  unsigned int _capacity;
  unsigned int _size;
};
