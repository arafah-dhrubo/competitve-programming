n = int(input())
flag = 0
arr = [2, 4, 6, 8, 10]

if n % 2 == 0 and n > 2:
    for i in range(len(arr)):
        if n < arr[i]:
            break
        if n % arr[i] == 0:
            flag = 1
if flag == 1:
    print('YES')
else:
    print('NO')
