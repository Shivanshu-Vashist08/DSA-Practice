# Day 1: Finding the Largest Element in an array
### Logic:
1. Initialize a variable 'max' with the first element of the array: 'max = arr[0] ' .
2. Traverse the array from the second element to the end.
3. In each step, compare the current element with 'max' .
4. If 'current element > max ' , update 'max' with the current element.
### Complexity:
- *** Time Complexity:** O(n) - Since we
Traverse the array exactly once.
- *** Space Complexity:** O(1) - No
extra space used.
# Day 2: Reverse an ArraySolved using the Two-Pointer Approach with a while loop.
### Logic:
1.Initialize two pointers: start = 0 and end = n - 1. 
2.Swap the elements at arr[start] and arr[end].
3.Increment start and decrement end in each step.
4.Continue until the pointers meet or cross each other (start < end).
### Complexity:
Time Complexity: O(n) - We traverse array just once.
Space Complexity: O(1) - We did'nt use any extra variable we just use pointer.
