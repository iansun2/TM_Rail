from setuptools import find_packages
from setuptools import setup

setup(
    name='tm_rail_interface',
    version='0.0.0',
    packages=find_packages(
        include=('tm_rail_interface', 'tm_rail_interface.*')),
)
