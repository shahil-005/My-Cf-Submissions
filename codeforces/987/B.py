import math
 
x , y = map ( int , input (). split ())
a = y * math . log ( x )
b = x * math . log ( y )
if abs ( a - b ) < 1e-8 :  
	print ( '=' )
elif a < b :
	print ( '<' )
else :
	print ( '>' )