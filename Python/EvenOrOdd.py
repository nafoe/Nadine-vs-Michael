##########################################################################################################
#
# Autor: Nadine Foerster
# Date: 27. November 2016
#
# Task: Write a program that takes a list of integers and checks if the list only contains odd or even
# numbers or both.
#
##########################################################################################################

import re

def evenOrOdd(listOfNumbers):
	numbers = re.findall('\d+',listOfNumbers)

	for element in numbers:
		print(element)
	odd = True
	even = True

	for element in numbers:
		if int(element)%2 == 0:
			odd = False
		if int(element)%2 == 1:
			even = False

	if odd:
		return "All numbers are odd."
	elif even:
		return "All numbers are even."
	else:
		return "There are both even and odd numbers."


user_input = raw_input("Give me a list, master:  ")
print(evenOrOdd(user_input))








