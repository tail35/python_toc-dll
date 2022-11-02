# -*-coding:utf-8-*-
# cython: language_level=3
# distutils: language = c++

import cython
import ctypes


cpdef public int myadd(int k):
  k=k+1
  return k
  
cdef void ReallAdd(char* num1):
  r = int( num1 ) + 1
  print( r  )
  
cpdef public addone(str1):
  pyByteStr1 = str1.encode('UTF-8')
  cdef char* cStr1 = pyByteStr1

  ReallAdd(cStr1)

  
  

