#!python
import os


env = Environment(ENV = os.environ)
env.Append(CXXFLAGS='--std=c++17') 
env.Append(CXXFLAGS='--coverage') 

env.Append(LINKFLAGS='-pthread')
env.Append(LINKFLAGS='--coverage') 

env.Append(LIBPATH='/home/stefan/repos/gtest/')
env.Append(LIBS=['gtest','gtest_main']) 
env.Append(CPPPATH=['/usr/src/gtest/include'])

env.Append(CPPPATH=[Dir('.').abspath + '/src'])


build_dir = 'build'
# SConscript('src/SConscript.py', variant_dir=build_dir, duplicate=1, exports = 'env')
SConscript('UnitTest.py', variant_dir=build_dir, duplicate=0, exports = 'env')


# src_files= \
# [
#     'test/Main.cpp',
#     'test/MathFunctionsTest.cpp',
#     'src/MathFunctions.cpp',
# ]
# 
# ret = env.Program(target = 'SandBox', source = src_files)
