menu = 0
friends = []
while menu != 9:
    print("-----2-5-----------")
    print("1. 친구 리스트 출력")
    print("2. 친구추가")
    print("3. 친구삭제")
    print("4. 이름변경")
    print("9. 종료")
    menu = int(input("메뉴를 선택하시오: "))
    if menu == 1:
        print(friends)
    elif  menu== 2:
        name = input("이름을 입력하시오: ")
        friends.append(name)
    elif  menu == 3:
        del_name = input("삭제하고 싶은 이름을 입력하시오:  ")
        if del_name in friends:
            friends.remove(del_name) 
        else:
            print("이름이 발견되지 않았음")
    elif  menu == 4:
        del_name = input("바꾸고 싶은 이름을 입력하시오:  ")
        if del_name in friends:
            friends.remove(del_name)
            del_name = input("바꿀 싶은 이름을 입력하시오:  ")
            friends.append(del_name)
        else:
            print("이름이 발견되지 않았음")
