'''
Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. No floats or non-positive integers will be passed.

For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

[10, 343445353, 3453445, 3453545353453] should return 3453455.

'''
def sum_two_smallest_numbers(numbers):
    i0=numbers[0]
    i1=numbers[1]
    for i in numbers:
        if(i<i0):
            i0=i
    for i in numbers:
        if(i<i1 and i!=i0):
            i1=i
    return i0+i1
