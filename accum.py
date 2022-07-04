'''
This time no story, no theory. The examples below show you how to write function accum:
Examples:

accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"

The parameter of accum is a string which includes only letters from a..z and A..Z.

'''
def accum(s):
    res=""
    for i in range(1,len(s)+1):
        for j in range(i):
            if j==0:res+=s[i-1].upper()
            else:res+=s[i-1].lower()
        res+='-'
    res=res[0:-1]
    return res
