"""
pybind11 example module
"""
from __future__ import annotations
from . import myspace
__all__ = ['add', 'myspace']
def add(arg0: int, arg1: int) -> int:
    """
    A function which adds two numbers
    """
