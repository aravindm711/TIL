import sys
sys.stdin = open('_input.txt')

na, ma = map(int, input().split())
ta = [int(input(), 2) for i in range(na)]
nb, mb = map(int, input().split())
tb = [int(input(), 2) for i in range(nb)]

res = []
for x in range(1-na, nb):
    for y in range(1-ma, mb):
        s = 0
        for i in range(max(0, -x), min(na, nb-x)):
            d = y + ma - mb
            c = tb[i+x] << d if d > 0 else tb[i+x] >> -d
            s += bin(ta[i] & c).count('1')
        res.append((s, x, y))

print('{0[0]} {0[1]}'.format(max(res)[1:]))
