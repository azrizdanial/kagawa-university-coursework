x = 30
if x % 6 == 0:
    if x % 4 == 0:
        print("A", end=" ")
    else:
        print("B", end=" ")
    print("C", end=" ")    
elif x % 5 == 0:
    if x % 2 == 0:
        print("D", end=" ")
    else:
        print("E", end=" ") 
    print("F", end=" ") 
else: 
    print("G", end=" ")
print("H", end=" ")