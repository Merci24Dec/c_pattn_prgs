#include <stdio.h>
void
main ()
{
  int i, j, l, c = 0;
  scanf ("%d", &l);		// l=5
  for (i = 0; i < l; i++)
    {
      for (j = 0; j < l; j++)
	{
	  c++;
	  if (j == l - 1)	// 0==4
	    {
	      printf ("%d", c);
	      printf ("\n");
	    }
	      else
	      {
	      printf ("%d*", c);
	    }
	}
    }
}
/*
5

1*2*3*4*5

6*7*8*9*10

11*12*13*14*15

16*17*18*19*20

21*22*23*24*25


*/
