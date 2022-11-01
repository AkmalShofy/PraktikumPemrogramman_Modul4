a, b = input().split()
a=int(a); b=int(b); i=a; j=b
if a>b :
    while i>=b and j<=a :
        print(i, end=' ') ; print(j, end=' '); i-=1; j+=1
        if i==b-1 : break
        else : print("-", end=' ')
if a<b :
    while i<=b and j>=a :
        print(i, end=' ') ; print(j, end=' '); i+=1; j-=1
        if j==a-1 : break
        else : print("-", end=' ')