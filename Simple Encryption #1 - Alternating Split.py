'''
Implement a pseudo-encryption algorithm which given a string S and an integer N concatenates all the odd-indexed characters of S with all the even-indexed characters of S, this process should be repeated N times.

Examples:

encrypt("012345", 1)  =>  "135024"
encrypt("012345", 2)  =>  "135024"  ->  "304152"
encrypt("012345", 3)  =>  "135024"  ->  "304152"  ->  "012345"

encrypt("01234", 1)  =>  "13024"
encrypt("01234", 2)  =>  "13024"  ->  "32104"
encrypt("01234", 3)  =>  "13024"  ->  "32104"  ->  "20314"

Together with the encryption function, you should also implement a decryption function which reverses the process.

If the string S is an empty value or the integer N is not positive, return the first argument without changes.

This kata is part of the Simple Encryption Series:

    Simple Encryption #1 - Alternating Split
    Simple Encryption #2 - Index-Difference
    Simple Encryption #3 - Turn The Bits Around
    Simple Encryption #4 - Qwerty

Have fun coding it and please don't forget to vote and rank this kata! :-)

'''
def decrypt(encrypted_text, n):
    if n<1 or encrypted_text=="":
        return encrypted_text
    else:
        text=''
        lenn=int(len(encrypted_text)/2)
        text+=encrypted_text[lenn]
        i=0
        while(len(text)<len(encrypted_text)):
            text+=encrypted_text[i]
            if(i>lenn):
                i=i-lenn
            else:
                i=i+lenn+1
        return decrypt(text,n-1)


def encrypt(text, n):
    if n<1 or text=="":
        return text
    else:
        encrypted=""
        for i in range(1,len(text),2):
            encrypted+=text[i]
        for i in range(0,len(text),2):
            encrypted+=text[i]
        return (encrypt(encrypted,n-1))
