import math

def sum_number(x):
    return sum(map(int, str(x)))

def prod_number(x):
    s = list(i for i in map(int, str(x)) if i != 0)
    return math.prod(s)

def main():
    n = int(input())
    for i in range(n):
        x = int(input())
        print(f"Для числа {x} сумма цифр равна {sum_number(x)} и произведение цифр равна {prod_number(x)}")
    
main()
