from engDict import BinarySearchTree

bst = BinarySearchTree()


def print_menu():
    print("        영어사전 프로그램")
    print("----------------------------")
    print("  1      |  탐색")
    print("  2      |  삽입")
    print("  3      |  검색")
    print("  4      |  삭제")
    print("  5      |  종료")
    print("----------------------------")
    print("실행하고자 하는 기능의 번호를 입력하세요. ")
    in_int = int(input())
    if in_int is 1:
        bst.pre_order_treversal()
        print_menu()
    elif in_int is 2:
        print("----------------------------")
        print("     입력할 단어를 입력하세요")
        word_ = input("  단어    |  ")
        mean_ = input("  뜻     |  ")
        syn_ = input("  동의어   |  ")
        if not bst.find(word_):
            if bst.insert(word_, mean_, syn_):
                print("입력 성공")
            else:
                print("입력 실패")
        else:
            print("중복된 단어입니다. 삭제후 다시 시도하세요.")
        print("----------------------------")
        print_menu()
    elif in_int is 3:
        print("----------------------------")
        print("     검색할 단어를 입력하세요")
        word_ = input("  단어    |  ")
        if bst.find(word_):
            temp = bst.find_es(word_)
            print("----------------------------")
            print("단어를 찾았습니다!")
            print("  단어    |  ", temp['word'])
            print("  뜻      |  ", temp['mean'])
            print("  동의어   |  ", temp['synonym'])
        else:
            print("단어를 찾지 못했습니다.")
        print("----------------------------")
        print_menu()
    elif in_int is 4:
        print("     삭제할 단어를 입력하세요")
        word_ = input("  단어    |  ")
        if bst.delete(word_):
            print("단어를 성공적으로 삭제했습니다.")
        else:
            print("단어를 삭제하지 못했습니다.")
            print("입력하신 단어는 없는 단어입니다.")
        print("----------------------------")
        print_menu()
    elif in_int is 5:
        print("정말로 종료하시겠습니까?")
        print("  1      |  종료")
        print("  2      |  메인으로 돌아가기")
        turn_switch = int(input())
        if turn_switch is 1:
            return 0
        elif turn_switch is 2:
            print_menu()
