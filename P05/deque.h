//
// Tomás Oliveira e Silva, AED, November 2021
//
// Generic deque implementation based on a circular buffer
//

#ifndef _AED_deque_
#define _AED_deque_

#include <cassert>

template <typename T>
class deque
{
  private:
    int max_size; // maximum stack size
    int cur_size; // current stack size
    T *data;      // the stack data (stored in an array)
  public:
    deque(int max_size = 100)
    {
      assert(max_size >= 10 && max_size <= 1000000);
      this->max_size = max_size;
      cur_size = 0;
      data = new T[max_size];
    }
    ~deque(void)
    {
    }
    void clear(void)
    {
      cur_size = 0;
    }
    int size(void) const
    {
    }
    int is_full(void) const
    {
    }
    int is_empty(void) const
    {
    }
    void insert_at_head(T v)
    {
    }
    T remove_head(void)
    {
    }
    T peek_head(void)
    {
    }
    void insert_at_tail(T v)
    {
    }
    T remove_tail(void)
    {
    }
    T peek_tail(void)
    {
    }
};

#endif
