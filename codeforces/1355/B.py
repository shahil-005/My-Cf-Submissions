T=int(input())
for t in range(T):
	n=int(input())
	e=list(map(int,input().strip().split(' ')))
	if len(e)==1:
		print(1)
		continue
	e.sort()
	cnt=0
	gr=0
	for i in range(n):
		cnt+=1
		if cnt>=e[i]:
			gr+=1
			cnt=0
	print(gr)