#!python
Import('env')

src_files= \
[
    'test/Main.cpp',
    'test/MathFunctionsTest.cpp',
    'src/MathFunctions.cpp',
]

ret = env.Program(target = 'SandBox', source = src_files)