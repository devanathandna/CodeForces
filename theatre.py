import math

n,m,a =map(int,input().split())

total= math.ceil(n/a) * math.ceil(m/a)

print(total)