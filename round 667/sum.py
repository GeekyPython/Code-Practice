def digSum(num):
    res = 0
    while num>0:
        res+=num%10
        num/=10
    
    return res

t = int(input())

for i in range(0,t):
    n,s = input().split()
    print(digSum(int(n)))

    