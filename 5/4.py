g = lambda x: x ** 2

for i in range(2, 5):
    print(i)
    print(g(i))
    print(g(g(i)))
    print(g(g(g(i))))


