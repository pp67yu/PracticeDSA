Str=input()
target=input()
t = 0
Len = len(Str)
i = 0
for i in range(Len):
    if (t == len(target)):
        break
    if (Str[i] == target[t]):
        t += 1
    else:
        t = 0
             
if (t < len(target)):
    print("NO")
else:
    print("YES")
    print("at index",i - t)


TIME COMPLEXITY: O(n)

