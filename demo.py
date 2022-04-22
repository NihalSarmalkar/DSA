n=int(input())
l=[]
for i in range(n):
    n1=int(input())
    l.append(n1)
max=0
vount=0
for i in range(len(l)):
    for j in range(len(l)):
        ans=l[j]-l[i]
        if(ans>=0):
            max=max+l[i]
    if(vount<max):
        vount=max

    max=0
print(vount)
    