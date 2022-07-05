'''
Create a RomanNumerals class that can convert a roman numeral to and from an integer value. It should follow the API demonstrated in the examples below. Multiple roman numeral values will be tested for each helper method.

Modern Roman numerals are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero. In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 is written as 2000=MM, 8=VIII; or MMVIII. 1666 uses each Roman symbol in descending order: MDCLXVI.

Input range : 1 <= n < 4000

In this kata 4 should be represented as IV, NOT as IIII (the "watchmaker's four").
Examples

RomanNumerals.to_roman(1000) # should return 'M'
RomanNumerals.from_roman('M') # should return 1000

'''

class RomanNumerals:

    def to_roman(val):
        res=''
        while(val>=1000):
            val-=1000
            res+='M'
        if(val>=900):
            val-=900
            res+='CM'
        if(val>=500):
            val-=500
            res+='D'
        if(val>=400):
            val-=400
            res+='CD'
        while(val>=100):
            val-=100
            res+='C'
        if(val>=90):
            val-=90
            res+='XC'
        if(val>=50):
            val-=50
            res+='L'
        if(val>=40):
            val-=40
            res+='XL'
        while(val>=10):
            val-=10
            res+='X'
        if(val>=9):
            val-=9
            res+='IX'
        if(val>=5):
            val-=5
            res+='V'
        if(val>=4):
            val-=4
            res+='IV'
        while(val>=1):
            val-=1
            res+='I'
        return res

    def from_roman(roman_num):
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
