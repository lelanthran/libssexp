
#ifndef H_SSEXP
#define H_SSEXP

typedef struct ssexp_t ssexp_t;
typedef struct ssexp_atom_t ssexp_atom_t;

#ifdef __cplusplus
extern "C" {
#endif

   ssexpt_t *ssexp_read (const char *src);

#ifdef __cplusplus
};
#endif


#endif
