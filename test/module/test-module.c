#include <glib.h>
#include <module/module.h>

int main(int argc, char **argv)
{
    g_assert_cmpint(1234, ==, get_test_value());
}
