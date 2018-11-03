#!python
Import('env')

local_env = env.Clone()
src_files= \
[
    'Main.cpp',
    'MathFunctionsTest.cpp',
]
 
 
ret = local_env.Program(target='SandBox', source=src_files)
 
Return('ret')