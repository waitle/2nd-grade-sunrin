def Search(aList, key):
    for i in range(len(aList)):
        if aList[i]==key:
            return i

numbers = [ 12, 23, 34, 45, 56, 67, 78, 80, 90 ]
position = Search(numbers, 80)

if position != -1:
	print("탐색 성공 위치 =  ", position)
else:
	print("탐색 실패 ")
