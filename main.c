#if defined(__MWERKS__) && defined(macintosh)
#include <MacMemory.h>
#define __bool_true_false_are_defined
typedef char bool;
#endif

#include <stdio.h>
#include "w2c2/w2c2_base.h"
#include "wasi/wasi.h"
#include "rustpython.h"

#ifdef __MSL__
#include <SIOUX.h>
#endif

void
trap(
    Trap trap
) {
    fprintf(stderr, "TRAP: %s\n", trapDescription(trap));
    abort();
}

wasmMemory*
wasiMemory(
    void* instance
) {
    return rustpython_memory((rustpythonInstance*)instance);
}

#if defined(__MSL__) && defined(macintosh)
char** environ = NULL;
#else
extern char** environ;
#endif

/* Main */

int main(int argc, char* argv[]) {
#if defined(__MWERKS__) && defined(macintosh)
    MaxApplZone();
    MoreMasters();
    MoreMasters();
#endif

    /* Initialize WASI */
    if (!wasiInit(argc, argv, environ)) {
        fprintf(stderr, "failed to init WASI\n");
        return 1;
    }
#ifdef __MSDOS__
    if (!wasiFileDescriptorAdd(-1, "C:\\", NULL)) {
        fprintf(stderr, "failed to add preopen\n");
        return 1;
    }
#endif
    if (!wasiFileDescriptorAdd(-2, ".", NULL)) {
        fprintf(stderr, "failed to add preopen\n");
        return 1;
    }

    if (!wasiFileDescriptorAdd(-3, "/", NULL)) {
        fprintf(stderr, "failed to add preopen\n");
        return 1;
    }

#ifdef __MSL__
    SIOUXSetTitle("\pRust");
#endif

    {
        rustpythonInstance instance;
        rustpythonInstantiate(&instance, NULL);
        rustpython__start(&instance);
        rustpythonFreeInstance(&instance);
    }

    return 0;
}
