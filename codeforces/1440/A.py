#Testing(Resolve it)
I=input
exec(int(I())*"n,*c,h=map(int,I().split());print(sum(min(c[i],c[i^1]+h)for i in map(int,I())));")