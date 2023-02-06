# https://codeforces.com/contest/514/problem/A

n = input()
l = []
for i in n:
    if(int(i) >= 5):
        l.append(9-int(i))
    else:
        l.append(i)

if(l[0] == 0):
    l[0] = '9'

# print l
s = ''.join(map(str, l))

print(s)
