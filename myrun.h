/* Generated by Cython 0.29.32 */

#ifndef __PYX_HAVE__myrun
#define __PYX_HAVE__myrun

#include "Python.h"

#ifndef __PYX_HAVE_API__myrun

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C int myadd(int, int __pyx_skip_dispatch);
__PYX_EXTERN_C PyObject *addone(PyObject *, int __pyx_skip_dispatch);

#endif /* !__PYX_HAVE_API__myrun */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initmyrun(void);
#else
PyMODINIT_FUNC PyInit_myrun(void);
#endif

#endif /* !__PYX_HAVE__myrun */
