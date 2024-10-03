#include <stdio.h>

char *ordinal(int v)
{
	/*
		 - create this function
		 - this code won't run with out it!
		 -  st, nd, rd,th
		 - st for 1
		 - nd for 2
		 - rd for 3
		 - th for 4,5,6,7,8,9,10
		 - th for 11 to 20
	 */

	if (v > 10 && v < 14)
	{
		return "th";
	}
	else
	{
		v = v % 10;
		if (v == 1)
			return "st";
		else if (v == 2)
			return "nd";
		else if (v == 3)
			return "rd";
		else
			return "th";
	}
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for (c = 1; c <= 20; c++)
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
					 c, ordinal(c),
					 c + 20, ordinal(c + 20),
					 c + 40, ordinal(c + 40),
					 c + 60, ordinal(c + 60),
					 c + 80, ordinal(c + 80));
	}

	return (0);
}
