import sys
# sys.stdin = open('_input.txt')

ml, mi = [], []
def recurseml(l):
    if len(l) == 0:
        return
    if len(l) == 1:
        ml.append(l[0])
        mi.append(0)
        return
    mx = max(l)
    mxi = len(l) - 1 - l[::-1].index(mx)
    ml.append(mx)
    mi.append(mxi)
    recurseml(l[: mxi])

n = int(input())
a = [int(i) for i in input().split()]
res = 0
for i in range(1, len(a)):
    if a[i] < a[i-1]:
        res += a[i-1] - a[i]
print(res)
