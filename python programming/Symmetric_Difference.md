## Symmetric Difference
Given 2 sets of integers,print their symmetric difference in ascending order. The term symmetric difference indicates those values that exist in one of the sets but do not exist in both.
```python
n1 = int(input())
l1 = list(map(int,input().strip().split()))
n2 = int(input())
l2 = list(map(int,input().strip().split()))
s1 = set(l1)
s2 = set(l2)
intersect=s1.intersection(s2)
s=s1.union(s2)
for i in intersect:
    s.remove(i)
l=list(s)
l.sort()
print(*l, sep="\n")
```
