for i in range(input()): 
        word = raw_input()
        word=word.upper() 
        vowels = ['A','E','I','O','U']
        count = 0 
        for j in range(1,len(word)): 
                if word[j] in vowels: 
                        if j == 0: 
                                count=count+1
                	elif word[j+1] in vowels: 
                                break
                        else:
				count=count+1
		print (count)
