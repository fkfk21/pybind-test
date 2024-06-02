import pybind_sample as ps
import cmake_example as cs
import numpy as np


print(ps.add(1, 3))
print(ps.myspace.add(1, 3))

print(cs.add(1, 3))

s = 1_000_000

def test_cs():
  for i in range(s):
    cs.add(i, i)


def test_ps():
  for i in range(s):
    ps.add(i, i)

def test_np():
  for i in range(s):
    np.add(i, i)