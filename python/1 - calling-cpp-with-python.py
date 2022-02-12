import ctypes
import ctypes.util
lib = ctypes.cdll.LoadLibrary("./lib.dll")

print(lib.add2(12))