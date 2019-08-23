for i in range(int(input())):
	n, m = map(int, input().split(' '))

	contest_hall_mat = list()
	for j in range(n):
		row_list = list(map(int, input().strip().split(" ")))
		contest_hall_mat.append(row_list)

	count = 0
	checked_list = list()
	a = [-1, -1, -1, 0, 0, 1, 1, 1]
	b = [-1, 0, 1, -1, 1, -1, 0, 1]
	for c in range(n):
		for l in range(m):
			if contest_hall_mat[c][l] != -1:
				if contest_hall_mat[c][l] in checked_list:
					continue
				else:
					for k in range(8):
						if c + a[k] < 0 or l + b[k] < 0 or c + a[k] >= n or l + b[k] >= m:
							continue
						else:
							if contest_hall_mat[c + a[k]][l + b[k]] == contest_hall_mat[c][l]:
								count += 1
								checked_list.append(contest_hall_mat[c][l])
								break
			else:
				continue


	print (count)
