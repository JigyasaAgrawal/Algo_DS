Given a sorted array arr[] of n elements, write a function to search a given element x in arr[].
A simple approach is to do a linear search. The time complexity of the above algorithm is O(n). Another approach to perform the same task is using Binary Search. 
Binary Search: Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.
 
 
Algorithm for binary search:-
We basically ignore half of the elements just after one comparison.
Compare x with the middle element.
If x matches with the middle element, we return the mid index.
Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
Else (x is smaller) recur for the left half.

Code for binary search:-
```python
def binarySearch (arr, l, r, x):
 
    # Check base case
    if r >= l:
 
        mid = l + (r - l) // 2
 
        # If element is present at the middle itself
        if arr[mid] == x:
            return mid
         
        # If element is smaller than mid, then it
        # can only be present in left subarray
        elif arr[mid] > x:
            return binarySearch(arr, l, mid-1, x)
 
        # Else the element can only be present
        # in right subarray
        else:
            return binarySearch(arr, mid + 1, r, x)
 
    else:
        # Element is not present in the array
        return -1
 
# Driver Code
arr = [ 2, 3, 4, 10, 40 ]
x = 10
 
# Function call
result = binarySearch(arr, 0, len(arr)-1, x)
 
if result != -1:
    print ("Element is present at index % d" % result)
else:
    print ("Element is not present in array")
    ```
