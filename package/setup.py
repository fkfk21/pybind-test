from setuptools import setup, find_packages

setup(
    name="pybind_sample",
    version="0.0.1",
    packages=find_packages(),
    package_data={"": ["*.so", "*.py", "*.pyi"]},
)
