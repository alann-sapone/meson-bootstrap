test_sources = []

foreach source_path : module_sources
  source_path = '../src/' + source_path
  test_sources += source_path
endforeach

test_module = executable('cdemo_test_module', [test_sources, 'module/test-module.c'],
    dependencies : [glib_dep],
    include_directories: [includes_dir]
)

test_module_fail = executable('cdemo_test_module_fail', [test_sources, 'module/test-module-fail.c'],
    dependencies : [glib_dep],
    include_directories: [includes_dir]
)

test('CDemo Test Valid', test_module)
test('CDemo Test Invalid', test_module_fail)
