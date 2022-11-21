//
// Tomás Oliveira e Silva, AED, November 2021
//
// Generic queue (First In First Out) implementation based on an linked list
//

#ifndef _AED_lQueue_
#define _AED_lQueue_

#include <cassert>
#include "sList.h"

template <typename T>
class lQueue
{
  private:
    int max_size;
    sList<T>* data;
  public:
    lQueue(void)
    {
      data = new sList<T>();
    }
    ~lQueue(void)
    {
      delete data;
    }
    void clear(void)
    {
      data->clear();
    }
    int size(void) const
    {
      return data->size();
    }
    int is_full(void) const
    {
      if (data->size == max_size) return 0;
      else return 1;
    }
    int is_empty(void) const
    {
      if (data->size == 0) return 0;
      else return 1;
    }
    void enqueue(T &v)
    {
      data->insert_after_tail(v);
    }
    T dequeue(void)
    {
      T value = this->peek();
      data->remove_head();
      return value;
    }
    T peek(void)
    {
      data->move_to_head();
      return data->value();
    }
};

#endif
