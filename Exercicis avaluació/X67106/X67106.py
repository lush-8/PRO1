import sys

def distancia_quadrada(a, b):

    return (a[0] - b[0]) ** 2 + (a[1] - b[1]) ** 2

# Pre:  v conté com a mínim un punt.
#       d >= 1
# Post: Retorna el nombre de parelles de punts que apareixen consecutivament a v,
#       i tals que la distància entre ells és menor o igual a d.
def compute(v, distance):

    cont = 0
    distance = distance ** 2
    n = len(v)
    
    for i in range(1, n):
        if distancia_quadrada(v[i-1], v[i]) <= distance:
            cont += 1
            
    return cont

def main():

    input = sys.stdin.read().strip().split()
    idx = 0
    
    while idx < len(input):
        n = int(input[idx])
        d = int(input[idx + 1])
        idx += 2
        v = []

        for i in range(n):
            x = int(input[idx + 2 * i])
            y = int(input[idx + 2 * i + 1])
            v.append((x, y))
        
        idx += 2 * n
        result = compute(v, d)
        print(result)

if __name__ == "__main__":

    main()