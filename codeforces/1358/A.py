import sys
#sys.stdin = open('input.txt', 'r')
#//sys.stdout = open('output.txt', 'w')
 
for nt in range(int(input())):
	n,m=map(int,input().split())
	print((m*n+1)//2)