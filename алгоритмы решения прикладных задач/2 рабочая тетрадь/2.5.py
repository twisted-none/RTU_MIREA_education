def gen(x):
    for _ in range(10):
        x = str(x**2)
        x = int(x[1:6])
        print(x)
gen(int(input())) # вводим число для генерации