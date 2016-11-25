##########################################################################################################
#
# Autor: Nadine Foerster
# Date: 25. November 2016
#
# Task: Write a program, that takes a list of numerical elements and sorts them in descending order.
#
##########################################################################################################
import re 

#sorting without sort()-methods and reverse()-methods
def reversing(listOfNumbers):
	numbers = re.findall('\d+',listOfNumbers)
	counter = 0
	sortedList = []

	while(len(numbers)>0):
		max_element = max(numbers)
		sortedList.append(max_element)
		numbers.remove(max_element)
	
	printList(sortedList)		

# sorting with imlemented list operations
def automaticReverse(listOfNumbers):
	numbers = re.findall('\d+',listOfNumbers)
	numbers.sort()
	numbers.reverse()
	printList(numbers)

def printList(sortedList):
	for number in sortedList:
		print(number)

user_input = raw_input("Give me a list,Seymour!: ")
#automaticReverse(user_input)
reversing(user_input)