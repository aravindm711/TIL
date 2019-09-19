# import sys
# sys.stdin = open('_input.txt')

inp = list(input().split('.'))
ans = ['', '', '.', '00', '']

ans[0] = '$' if inp[0][0]!='-' else '($'
ans[4] = '' if inp[0][0]!='-' else ')'

ans[1] = inp[0] if inp[0][0]!='-' else inp[0][1:]
ans[1] = ''.join(reversed(ans[1]))
for i, j in zip(range(3, len(ans[1]), 3), range(len(ans[1]))):
    ans[1] = ans[1][:i+j] + ',' + ans[1][i+j:]
ans[1] = ''.join(reversed(ans[1]))
if len(inp)==2:
    if len(inp[1]) < 2: ans[3] = inp[1][0] + '0'
    else: ans[3] = inp[1][:2]

print(''.join(ans))