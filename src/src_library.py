#!python
Import('env')

local_env = env.Clone()
src_files= \
[
    'MathFunctions.cpp',
]


ret = local_env.Library(target='src_library', source=src_files)
local_env.AlwaysBuild(ret)

Return('ret')