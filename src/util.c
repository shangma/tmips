#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include "util.h"

void *xmalloc(size_t size) {
    void *p = malloc(size);
    if (!p) {
        fprintf(stderr, "xmalloc: malloc returned NULL\n");
        abort();
    }
    return p;
}
