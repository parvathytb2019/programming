## Subarray with given sum
given an unsorted array A,with N length ,find a continous  subarray, such that the sum of that continous subarray equal to given sum
exm:
input N=5,S=12,A=[1,2,3,7,5]
output:1st postion to 3rd postion 
        3rd postion to 4th position
```python
n=int(input("N="))
s=int(input("Sum="))
a=[]
for i in range(0,n):
    b=int(input())
    a.append(b)
start=0
end=0
i=0
sm=0
for i in range(n):
    for j in range(i,n):
        sm=sm+a[j]
        if(sm==s):
            start=i
            end=j
            break
    if(sm==s):
        break
        
    sm=0
print(start+1,end=" ")
print(end+1)
```
