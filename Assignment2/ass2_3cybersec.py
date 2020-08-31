s1=input('Enter a string')
c1=0
c2=0
for i in s1:
    if(i.islower()):
        c1=c1+1
    elif(i.isupper()):
         c2=c2+1
print("No of lowercase letters",c1)
print("No of uppercase letters",c2)
