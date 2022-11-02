//
// Tomás Oliveira e Silva, AED, November 2021
//
// matched-parenthesis verification
//

#include <iostream>
#include "aStack.h"

using std::cout;
using std::cerr;
using std::endl;


int check_parenthesis(const char *s)
{
  aStack<int> a1(100);
  int bad = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == '(') a1.push(i);
    else if (s[i] == ')'){
      if (a1.is_empty()) {
        cout << "  unmatched \')\' at position " << i << "\n";
        bad = 1;
      }
      else {
        cout << "  \'(\' at position " << a1.pop() << " and matching \')\' at position " << i << "\n"; 
      }
    }
  }
  if (!a1.is_empty() && bad == 0) {
    while(!a1.is_empty())
      cout << "  unmatched \'(\' at position " << a1.pop() << "\n";
    bad = 1;
  }
  return bad;
}

int main(int argc,char **argv)
{
  if(argc == 1)
  {
    cerr << "usage: " << argv[0] << " [arguments...]" << endl;
    cerr << "example: " << argv[0] << " 'abc(def)ghi' 'x)(y'" << endl;
    return 1;
  }
  for(int i = 1;i < argc;i++)
  {
    cout << argv[i] << endl;
    if(check_parenthesis(argv[i]) == 0)
      cout << "  good" << endl;
    else
      cout << "  bad" << endl;
  }
  return 0;
}
