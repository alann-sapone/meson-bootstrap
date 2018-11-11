#include "module/module.h"
#include <glib.h>

int main(int argc, char **argv)
{
  g_debug("Returned value = %d", get_test_value());
  return 0;
}
