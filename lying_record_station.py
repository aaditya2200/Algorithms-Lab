from math import prod

def calculate_probability(n):
    numerator = prod([(n - i) for i in range(1, 201)])
    denominator = n**201
    probability = numerator / denominator
    return probability

n = 10**6
result = calculate_probability(n)

print(result)

