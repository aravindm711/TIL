for i in range(int(input())):
	num_list = list(map(int, input().strip().split(" ")))

	num_list.sort()
	print (num_list[1])