#include "module/module.h"
#include "glib.h"

typedef struct {
    GPtrArray *array;
} TMisc;

int get_test_value(void)
{
    return 1234;
}

void do_something_wrong(void)
{
    TMisc *misc = NULL;
    g_ptr_array_add(misc->array, (gpointer)misc->array);
}