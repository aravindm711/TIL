for i in range(int(input())):
	n, m = map(int, input().split(' '))

	contest_hall_mat = list()
	for j in range(n):
		row_list = list(map(int, input().strip().split(" ")))
		contest_hall_mat.append(row_list)
		
	for c in range(n):
		for l in range(m):
			print (contest_hall_mat[c][l])