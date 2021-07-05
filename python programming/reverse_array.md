## Reverse of an array
Python program to input an array of integers, print it's elements in reverse order as a single line of space-separated numbers.
```python
n = int(input().strip())
arr = list(map(int, input().rstrip().split()))
for i in range(len(arr)-1,-1,-1):
    print(arr[i],end=" ")
```
