m = {
        '>':'1000',
        '<':'1001',
        '+':'1010',
        '-':'1011',
        '.':'1100',
        ',':'1101',
        '[':'1110',
        ']':'1111'
    }

inp = input()
inp = ''.join(m[x] for x in inp)
print(int(inp, 2)%1000003)