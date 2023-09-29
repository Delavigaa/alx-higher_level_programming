#!/usr/bin/python3
import requests
import sys

url = sys.argv[1]

response = requests.get(url)
content = response.text

if response.status_code >= 400:
    print('Error code:', response.status_code)
else:
    print(content)
