## Minimum steps
There are three integers k,m,n. You have to convert the number k to m by performing the given operations:

Multiply k by n
 Decrease k by 2.
 Decrease k by 1.
You have to perform the above operations to convert the integer from k to m and find the minimum steps.you can use the operations in any order
```python
t=int(input())
while(t>0):
    k=int(input())
    m=int(input())
    n=int(input())
    count=0
    while(True):
        if(k<m):
            while(True):
                k=k*n
                count+=1
                if(k>m):
                    break
            if((k-2)>=m):
                k-=2
                count+=1
            else:
                k-=1
                count+=1
        if(k>m):
            if((k-2)>=m):
                k-=2
                count+=1
            else:
                k-=1
                count+=1
        if(k==m):
            break
    print(count)
    t-=1
    ```
