

t = int(input())

for i in range(0,t):
    n = int(input())
    strArr = []

    for j in range(0,n):
        inp = input()
        temp = "".join(sorted(inp))
        strArr.append(temp)
    
    j=0
    while j<n-1 and strArr[j] == strArr[j+1]:
        j+=1
        
    if j==n-1:
        print("YES\n ")
        
    else:
        print("NO\n")



