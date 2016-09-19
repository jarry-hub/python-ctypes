#coding=gbk
from ctypes import *

class hello_test(Structure):
    _fields_=[
            ('a',c_int),
            ('b',c_char*64)]


so=cdll.LoadLibrary("./libhello.so")
func = so.hello

o = hello_test()
o.a=1024
o.b="cadasdaf"

func(byref(o))
