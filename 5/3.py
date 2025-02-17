def fibonachi(n, a = 1, b = 1, cur_n = 2):
    if cur_n == n:
        print(a + b)
    elif cur_n < 3:
        print(a)
        print(b)
        fibonachi(n, a, b, cur_n + 1)
    else:
        print(a + b)
        fibonachi(n, b, a + b, cur_n + 1)

fibonachi(int(input()))
