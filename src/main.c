#include "module/module.h"
#include <glib.h>

int main(int argc, char **argv)
{
  g_warning("Returned value = %d", module_get_int_value());
  return 0;
}
