n = int(input())

for i in range(n):
    s = input()
    hh, mm = map(int, s.split(':'))

    if hh < 12:
        period = "AM"
        if hh == 0:
            hh = 12
    else:
        period = "PM"
        if hh > 12:
            hh -= 12

    print("{:02d}:{:02d} {}".format(hh, mm, period))
