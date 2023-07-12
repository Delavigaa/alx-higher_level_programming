#!/usr/bin/python3
"""Define a text file Reading Function"""


def read_file(filename=""):
    """Print the contents of a UTF8 text file to stdout."""
    with open(filename,encoding="UTF8") as f:
        print(f.read())
