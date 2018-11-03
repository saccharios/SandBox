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


build_dir = '#build'

env.Append(CPPPATH=[Dir('.').abspath + '/src'])
env.Append(CPPPATH=[Dir('.').abspath + '/test'])

lib_name = 'src_library'
lib_path = build_dir+'/lib/'
SConscript('src/src_library.py', variant_dir=lib_path, duplicate=False, exports=['env','lib_name'])
 

env.Append(LIBPATH=[lib_path, 'pthread'])
env.Append(LIBS=[lib_name]) 


SConscript('test/UnitTest.py', 
           variant_dir=build_dir, 
           duplicate=False, 
           exports=['env'])



