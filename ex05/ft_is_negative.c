#include <unistd.h>

void ft_is_negative(int no)
{
   if (no<0)
	{ 
           write(1,"N",1);
        }
   else
	{ 
           write(1,"P",1);
        }

   write(1,"\n",1);
}
