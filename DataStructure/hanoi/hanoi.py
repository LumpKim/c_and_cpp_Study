def hanoimove(num, start, middle, end):
    if num == 1:
        print("원반 1을 %s에서 %s로 이동"%(start, end))

    else:
        hanoimove(num-1, start, end, middle)
        print("원반 %d을(를) %s에서 %s로 이동"%(num, start, end))
        hanoimove(num-1, middle, start, end)


hanoimove(3, 'A', 'B', 'C')
