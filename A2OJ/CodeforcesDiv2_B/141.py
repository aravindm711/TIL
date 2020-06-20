import sys
#sys.stdin = open('_input.txt')

na, ma = list(map(int, input().split()))
a = []
for _ in range(na):
    x = input()
    a.append([1 if x[i] == '1' else 0 for i in range(len(x))])

nb, mb = list(map(int, input().split()))
b = []
for _ in range(nb):
    x = input()
    b.append([1 if x[i] == '1' else 0 for i in range(len(x))])

m = 0
res = [0, 0]
for x in range(1-na, nb):
    for y in range(1-ma, mb):
        s = 0
        for i in range(na):
            for j in range(ma):
                if 0 <= i+x < nb and 0 <= j+y < mb:
                    s += a[i][j] * b[i+x][j+y]
        if s > m:
            res = [x, y]
            m = s

print(' '.join(map(str, res)))
