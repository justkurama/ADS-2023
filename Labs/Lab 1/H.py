from math import sqrt, ceil 
num = int(input())


check = False

if num == 1:
    print("NO")
elif num > 1:
    for i in range(2, int(ceil(sqrt(num)))):
        if (num % i) == 0:
            check = True
            break

    if check:
        print("NO")
    else:
        print("YES")