a, b = input().split()
a = int(a) ; b = int(b)
for i in range(1, a+1) :
    j=i 
    while j>1 :
        print("(%d * %d) + " % (j,b), end='') ; j-=1
    c=1; h=(i*b)
    while c<i :
        h+=(c*b); c+=1
    print("(%d * %d) = %d" % (j,b,h))
d=1; e=1; t=0
while d<=a :
    t+=e*b; e+=d+1; d+=1
print("%d"%(t))