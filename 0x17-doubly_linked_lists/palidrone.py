#!/usr/bin/python3

def largest_palindrome_product(n: int) -> int:
    '''Find Largest Palindrome Product
    '''
 
    upper_limit = 10 ** n - 1 
    lower_limit = upper_limit // 10  
  
    max_product = 0
    for i in range(upper_limit, lower_limit, -1):

        if i * i < max_product:
            break
     
        for j in range(i, lower_limit, -1):
            product = i * j
            if product <= max_product:
                break

            reverse = int(str(product)[::-1])   # Alternate way to reverse product
            if product == reverse:
                max_product = product

    return max_product
