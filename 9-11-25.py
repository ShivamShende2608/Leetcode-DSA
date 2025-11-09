"""
Filter Even Numbers from a List
Author: Shivam Shende
Description: Demonstrates both loop and comprehension methods
"""

# Approach 1: For loop
def filter_even_numbers_loop(numbers):
    even_list = []
    for num in numbers:
        if num % 2 == 0:
            even_list.append(num)
    return even_list


# Approach 2: List comprehension
def filter_even_numbers_comprehension(numbers):
    return [num for num in numbers if num % 2 == 0]


# Predefined testing
if __name__ == "__main__":
    numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    print("Original list:", numbers)
    print("Loop Method:", filter_even_numbers_loop(numbers))
    print("List Comprehension:", filter_even_numbers_comprehension(numbers))
