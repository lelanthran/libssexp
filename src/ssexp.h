
#ifndef H_SSEXP
#define H_SSEXP

#include <stdlib.h>

#define SSEXP_LOG(...)     do {\
   printf ("%s:%i", __FILE__, __LINE__);\
   printf (__VA_ARGS__);\
} while (0)


typedef struct ssexp_t ssexp_t;
typedef struct ssexp_atom_t ssexp_atom_t;

#ifndef USE_STATIC
#define USE_STATIC static
#endif

USE_STATIC
ssexp_t *ssexp_parse_string (const char *src)
{
   return NULL;
}

#endif
