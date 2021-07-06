## Prime or Not
```python
def is_prime(n):
    flag=1
    for i in range(2,n):
        if n%i==0:
            flag=0
            break
    print(bool(flag))
n=int(input("Enter a natural number:"))
is_prime(n)
```
