# Написать программу для факторизации заданного с клавиатуры нечетного
# числа методом Ферма (указать простые множители и их кратность). Для
# анализа числа на простоту использовать решето Эратосфена
def resheto(n):
    lst = [i for i in range(2, n + 1)]
    for i in range(len(lst)):
        for j in range(i + 1, len(lst)):
            if lst[i] != 0 and lst[j] % lst[i] == 0:
                lst[j] = 0
    lst = [i for i in lst if i != 0]
    return lst

del1, del2 = 0, 0
n = int(input())
lst = resheto(n)
m, q, x = n ** 0.5, 0, 1
q_sqrt = 0

while True:
    q = (m + x) * (m + x) - n
    q_sqrt = q ** 0.5
    if q_sqrt ** 2 == q:
        break
    else:
        x += 1

del1 = (m + x) - int(q_sqrt)
del2 = (m + x) + int(q_sqrt)

print(f'{n} = {del1} * {del2}')



