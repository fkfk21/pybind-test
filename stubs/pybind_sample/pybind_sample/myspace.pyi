"""
A submodule
"""
from __future__ import annotations
__all__ = ['MyClass', 'add']
class MyClass:
    def __init__(self, arg0: int) -> None:
        ...
    def getValue(self) -> int:
        ...
    def setValue(self, arg0: int) -> None:
        ...
def add(arg0: int, arg1: int) -> int:
    """
    A function which adds two numbers
    """
