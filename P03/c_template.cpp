//
// Tomás Oliveira e Silva, AED, October 2021
//
// example of a generic class (with a template)
//

#include <iostream>

using namespace std;

//
// warning: this code is (was) just an example of how an integer parameter can appear in a class template
//          this is NOT a good way to define the maximum size of a stack!
//          it is FAR better to put max_size as a parameter (with a default value)
//          on the constructor member function of the stack class (do that as a homework exercise)
//          homework: to this!
//
//            Done :)
//

enum stack_values {
  stack_full = 1, stack_empty = 0
};

template <typename T>
class stack
{
  private:
    int d_size;
    int d_max_size;
    T d_data[30];
  public:
    stack(int max_size)
    { // constructor
      d_size = 0;
      d_max_size = max_size;
    }
    ~stack(void)
    { // destructor
      if(d_size > 0)
        cerr << "warning: the stack being destroyed is not empty" << endl;
    }
    void push(T v)
    { // put a thing in the stack
      if(d_size >= d_max_size){
        cerr << "push error: the stack is full" << endl; // nice place to throw an exception!
        throw stack_full;
      }
      else
        d_data[d_size++] = v;
    }
    void put(T v)
    { // same as push
      push(v);
    }
    T pop(void)
    { // get and remove a thing from the top of the stack (last in, first out!)
      T v;

      if(d_size <= 0)
      {
        cerr << "pop error: the stack is empty" << endl; // nice place to throw an exception!
        throw stack_empty;
        v = T(0); // this assumes that the compiler knows how to convert an integer to type T
      }
      else
        v = d_data[--d_size];
      return v;
    }
    T get(void)
    { // same as pop
      return pop();
    }
    T top(void)
    { // get a thing from the top of the stack
      T v;

      if(d_size <= 0)
      {
        cerr << "top error: the stack is empty" << endl; // nice place to throw an exception!
        throw stack_empty;
        v = T(0); // this assumes that the compiler knows how to convert an integer to type T
      }
      else
        v = d_data[d_size - 1];
      return v;
    }
};

int main(void)
{
  stack<int> s(10); // a stack capable of holding 10 integers

  cout << "push: 3" << endl;
  s.push(3);
  cout << "push: 7" << endl;
  s.push(7);
  cout << "pop: " << s.pop() << endl; // should print 7
  cout << "top: " << s.top() << endl; // should print 3
  cout << "pop: " << s.pop() << endl; // should print 3
  return 0;
}
