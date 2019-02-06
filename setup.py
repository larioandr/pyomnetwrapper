import setuptools

with open('README.md', 'r') as fh:
    long_description = fh.read()

setuptools.setup(
    name="pyomnetwrapper",
    version="0.0.1dev0",
    author="Andrey Larionov",
    author_email="larioandr@gmail.com",
    description="A python wrapper for OMNeT++ 5",
    long_description=long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/larioandr/pyomnetwrapper",
    packages=setuptools.find_packages(exclude=['samples', 'tests*']),
    keywords="simulation omnet++ wrapper",
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    install_requires=[],
    python_requires='>=3',
)