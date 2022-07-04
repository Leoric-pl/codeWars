'''
Write a function, which takes a non-negative integer (seconds) as input and returns the time in a human-readable format (HH:MM:SS)

    HH = hours, padded to 2 digits, range: 00 - 99
    MM = minutes, padded to 2 digits, range: 00 - 59
    SS = seconds, padded to 2 digits, range: 00 - 59

The maximum time never exceeds 359999 (99:59:59)

You can find some examples in the test fixtures.

'''

def make_readable(seconds):
    hours=0
    mins=0
    while(seconds>=3600):
        seconds-=3600
        hours+=1
    if hours<10: res="0"+str(hours)+":"
    else: res=str(hours)+":"
    while(seconds>=60):
        seconds-=60
        mins+=1
    if mins<10: res+="0"+str(mins)+":"
    else: res+=str(mins)+":"
    if seconds<10:res+="0"+str(seconds)
    else:res+=str(seconds)
    return res
