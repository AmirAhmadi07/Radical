import math
n_k = input()
n = int(n_k.split(' ')[0])
k = int(n_k.split(' ')[1])
i = 0
output = 0
while (i != n + 1):
    output += math.factorial((n - i) + k - 1) // (math.factorial(k - 1) * math.factorial((n - i)))
    i = i + 1
print (output)
