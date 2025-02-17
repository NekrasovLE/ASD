def calc(a, b, s):
    if s == '+':
        return a + b
    elif s == '-':
        return a - b
    elif s == '*':
        return a * b
    elif s == '/':
        return a / b
    else:
        return "Не известная операция"

for i in range(4):
    print(calc(float(input()), float(input()), input()))
