import sys
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
 
for _ in range(int(input())):
	n=int(input())
	a=list(map(int,input().split()))
	a.sort()
	ans=1
	for i in range(n):
		if (a[i]<=i+1):
			ans=i+2
	print(ans)