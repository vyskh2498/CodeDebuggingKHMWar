#
Input = [] 
n = int(input("Enter number of elements : ")) 
ans = 0 #initialised
for i in range(0, n): 
    ele = int(input()) 
    Input.append(ele)
if(Input[0]<0):
    prev =-1
else:
    prev=1
for elem in Input: 
	if elem ==0: 	# changed = to ==	
		sign = -1
	else: 
		sign = elem / abs(elem) 

	if sign == -1*prev: #changed to -1*prev
		prev = sign 		
		sign = sign + 1
		
print(sign)
