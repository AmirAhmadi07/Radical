n_k = input()
n = int(n_k.split(' ')[0])
k = int(n_k.split(' ')[1])
i = n
output = 0
factorial_k_minus_1 = 1 # no need to recalculate later
for j in range (1, k):
    factorial_k_minus_1 *= j
factorial_n = 1 # no need to recalculate later
for j in range (1, n + 1):
    factorial_n *= j
factorial_n_plus_k_minus_1 = 1 # no need to recalculate later
for j in range (1, n + k):
    factorial_n_plus_k_minus_1 *= j
dividor = n + k - 1
while (i != 0):
    output += factorial_n_plus_k_minus_1 // (factorial_k_minus_1 * factorial_n)
    factorial_n //= i
    factorial_n_plus_k_minus_1 //= dividor
    dividor -= 1
    i -= 1
print (output + 1) # "+ 1" is for all of them being zero
