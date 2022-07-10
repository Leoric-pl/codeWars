'''
Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman numeral.

Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.

Example:

solution('XXI') # should return 21

Help:

Symbol    Value
I          1
V          5
X          10
L          50
C          100
D          500
M          1,000

'''
def solution(roman_num):
    res=0
    for i in roman_num:
        if(i=='M'):res+=1000
        elif(i=='D'):res+=500
        elif(i=='C'):res+=100
        elif(i=='L'):res+=50
        elif(i=='X'):res+=10
        elif(i=='V'):res+=5
        elif(i=='I'):res+=1
    if roman_num.find('IX')!=-1:res-=2
    if roman_num.find('IV')!=-1:res-=2
    if roman_num.find('XL')!=-1:res-=20
    if roman_num.find('XC')!=-1:res-=20
    if roman_num.find('CD')!=-1:res-=200
    if roman_num.find('CM')!=-1:res-=200
    return res 
