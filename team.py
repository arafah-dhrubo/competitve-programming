n = int(input())
count = 0

for i in range(0, n):
    c = 0
    text = input()
    length = len(text)
    for j in range(length):
        if text[j] == '1':
            c += 1
    if c >= 2:
        count += 1
print(count)
