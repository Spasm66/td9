def power(x, n, result):
    if n == 0:
        return result
    return power(x, n - 1, x * result)

print(power(2, 2, 1))