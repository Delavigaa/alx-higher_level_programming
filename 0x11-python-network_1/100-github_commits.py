#!/usr/bin/python3
import requests
import sys

repo = sys.argv[1]
owner = sys.argv[2]

response = requests.get('https://api.github.com/repos/{}/{}/commits'.format(owner, repo))

for commit in response.json()[:10]:
    print('{}: {}'.format(commit['sha'], commit['commit']['author']['name']))
