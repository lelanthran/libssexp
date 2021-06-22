
#include <stdio.h>
#include <stdlib.h>

#include "ssexp.h"

int main (int argc, char **argv)
{
   int ret = EXIT_FAILURE;
   ssexp_t *test = ssexp_parse_string ("Hello World");

   if (!test) {
      SSEXP_LOG ("Failed to parse from string\n");
      goto errorexit;
   }

   ret = EXIT_SUCCESS;

errorexit:

   return ret;
}
