#Importing numpy
import numpy as np

#filehandler object
file = open('numbers.txt', 'w+')

l =  [478, 256, 345, 231, 246, 781]

#loop to write in file
for num in l:
	file.write(str(num)+'\n')
file.close()

file2 = open('numbers.txt','r')
l2 = []
for line in file2:
	l2.append(int(line))
file2.close()

#outputing the final result
print('Mean of Numbers: {0} \nStandard Deviation of Numbers: {1}'.format(sum(l2)/len(l2), np.std(l2)))
