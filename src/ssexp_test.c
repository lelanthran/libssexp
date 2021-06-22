
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
   int ret = EXIT_FAILURE;
   ssexp_t *ssexp_read_string ("Hello World");

errorexit:

   return ret;
}
