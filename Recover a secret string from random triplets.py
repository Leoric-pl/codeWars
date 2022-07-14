'''
There is a secret string which is unknown to you. Given a collection of random triplets from the string, recover the original string.

A triplet here is defined as a sequence of three letters such that each letter occurs somewhere before the next in the given string. "whi" is a triplet for the string "whatisup".

As a simplification, you may assume that no letter occurs more than once in the secret string.

You can assume nothing about the triplets given to you other than that they are valid triplets and that they contain sufficient information to deduce the original string. In particular, this means that the secret string will never contain letters that do not occur in one of the triplets given to you.

'''
def recoverSecret(triplets):
    res=''
    all=[]
    second=[]
    first=[]
    for i in triplets:
        if i[0] not in all:all.append(i[0])
        if i[1] not in all:all.append(i[1])
        if i[2] not in all:all.append(i[2])
        if i[0] not in first:first.append(i[0])
        if i[1] not in second:second.append(i[1])
        if i[2] not in second:second.append(i[2])
    while len(res)<len(all):
        for letter in first:
            if letter not in second:
                res+=letter
                first=[]
                second=[]
                for i in triplets:
                    if i[0]==letter:
                        i[0],i[1],i[2]=i[1],i[2],''
                for i in triplets:
                    if i[0] not in first:first.append(i[0])
                    if i[1] not in second:second.append(i[1])
                    if i[2] not in second:second.append(i[2])
    return res
                        
