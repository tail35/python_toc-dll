from setuptools import setup
from Cython.Build import cythonize

setup(
    name='myrunhaha',
    ext_modules=cythonize(["myrun.pyx"]),
    zip_safe=False,
)