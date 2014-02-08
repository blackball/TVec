TVec

A Simple inline dynamic array implementation in C.

```c
int *pt = 0; /* *int* could be any basic type */

TVEC_NEW(pt, 0); /* create a vector by default size if second parameter is 0 */

/* append items */
TVEC_APPEND(pt, 7);
TVEC_APPEND(pt, 5);
TVEC_APPEND(pt, 3);
TVEC_APPEND(pt, 8);

TVEC_DELETE(pt, 2); /* delete pt[2] */

#define CMP(a,b) ((*a) > (*b)) /* the comparator */

TVEC_SORT(pt, CMP); /* sort by desendent order */
TVEC_FREE(pt); /* free the memory */

```
Note you need to modify the type to your need in TVec.h in line 10.