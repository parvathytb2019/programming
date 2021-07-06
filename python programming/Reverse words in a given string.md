## Reverse words in a given string
Python program to reverse a string
example:
input :I.Love.India
output:India.Love.I
```python
string=input()
l=string.split('.')
l.reverse()
length=len(l)
for i in l:
    print(i,end="")
    if(i!=l[length-1]):
        print(".",end="")
```
