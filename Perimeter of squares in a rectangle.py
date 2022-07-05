'''
The drawing shows 6 squares the sides of which have a length of 1, 1, 2, 3, 5, 8. It's easy to see that the sum of the perimeters of these squares is : 4 * (1 + 1 + 2 + 3 + 5 + 8) = 4 * 20 = 80

Could you give the sum of the perimeters of all the squares in a rectangle when there are n + 1 squares disposed in the same manner as in the drawing:
http://i.imgur.com/EYcuB1wm.jpg

alternative text
Hint:

See Fibonacci sequence
'''

def fib(n):
    a1=1
    a2=1
    num=1
    while n!=num:
        num+=1
        a2+=a1
        a1=a2-a1
    return a2
def perimeter(n):
    sum=fib(n+2)-1
    sum*=4
    return sum
