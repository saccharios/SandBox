#!python
Import('env')

src_files=  ['Main.cpp','MathFunctions.cpp','MathFunctionsTest.cpp']
ret = env.Program(target = 'SandBox', source = src_files)