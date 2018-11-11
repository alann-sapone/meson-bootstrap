#include "module/module.h"
#include "glib.h"

typedef struct {
    GPtrArray *array;
} TMisc;

int module_get_int_value(void)
{
    return 1234;
}

void module_do_something_wrong(void)
{
    TMisc *misc = NULL;
    g_ptr_array_add(misc->array, (gpointer)misc->array);
}