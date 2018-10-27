#!python
import os


env = Environment(ENV = os.environ)
env.Append(CXXFLAGS='--std=c++17') 

build_dir = 'build'
SConscript('src/SConscript.py', variant_dir=build_dir, duplicate=0, exports = 'env')