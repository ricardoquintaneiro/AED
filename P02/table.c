//
// Tomás Oliveira e Silva, AED, October 2021
//
// program to print a table of the squares and square roots of some integers
//
// on GNU/Linux, run the command
//   man 3 printf
// to see the manual page of the printf function
//

#include <math.h>
#include <stdio.h>

void do_it(int N)
{
  int i;

  FILE * f = fopen("table.txt", "w");

  fprintf(f,"angle sine  cosine\n");
  fprintf(f,"----- ----- -----\n");
  for(i = 0;i <= N;i++)
    fprintf(f,"%5d %2.5f %2.5f\n",i,sin((i/180.0)*M_PI),cos((i/180.0)*M_PI));
  
  fclose(f);
}

int main(void)
{
  do_it(90);
  return 0;
}
