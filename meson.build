project('cdemo', 'c')

# Module sources
module_sources = [
    # Module
    'module/module.c'
]

# Dependencies
glib_dep = dependency('glib-2.0')

includes_dir = include_directories([
    'include',
    'include/module'
])

subdir('src')
subdir('test')
