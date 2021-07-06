## IT'S MAGIC
Sussutu is a world-renowned magician. And recently, he was blessed with the power to remove EXACTLY ONE element from an array.

Given, an array A (index starting from 0) with N elements. Now, Sussutu CAN remove only that element which makes the sum of ALL the remaining elements exactly divisible by 7.

Throughout his life, Sussutu was so busy with magic that he could never get along with maths. Your task is to help Sussutu find the first array index of the smallest element he CAN remove.
```python
def the_magic(num):
   store=[]
   for i in num:
       if(sum(num)-i)%7==0:
            store.append(i)
            min_rem=min(store)
   if len(store)>0:
       for i in range(len(num)):
           if num[i]==min_rem:
               return i;
   else:
       return -1

n=int(input())
num=list(map(int,input().split(' ',n-1)))
print(the_magic(num))
```
