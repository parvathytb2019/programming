## Digits in a string
Python program to print the first 10 digits present in a string
```python
str=input("Enter the string:")
num=""
result=""
for ch in str:
    if ch.isdigit():
        num=num+ch
for i in range(10):
   result=result+num[i]
print(result)
```
