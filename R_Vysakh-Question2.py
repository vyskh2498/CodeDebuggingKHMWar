for i in range(input()): 
        word = raw_input() #changed to raw_input
        word=word.upper() #changed to word=word.upper()
        vowels = ['A','E','I','O','U']
        count = 0 #initialised
        for j in range(1,len(word)): 
                if word[j] in vowels: 
                        if j == 0: #chnaged = to ==
                                count=count+1 #changed from count++ to count=count+1
                	elif word[j+1] in vowels: 
                                break
                        else:
				count=count+1 #changed from count++ to count=count+1
		print (count)
