project('cdemo', 'c')

# Demo module sources
module_sources = [
    'module/module.c'
]

# Dependencies
shared_dependencies = [
    dependency('glib-2.0')
]

includes_dir = include_directories([
    'include',
    'include/module'
])

subdir('src')
subdir('test')
