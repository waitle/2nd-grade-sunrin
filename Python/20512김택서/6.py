numbers = [ 10, 20, 30, 40, 50, 60, 70, 80, 90 ]
result = [ ]
for value in range(len(numbers)):
    if numbers[value]>=60:
        result.append(numbers[value])
print(result)
