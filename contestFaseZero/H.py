
def is_prime(number):
    if number == 1:
        return False
    elif number <= 3:
        return True
    elif number % 2 == 0 or number % 3 == 0:
        return False
    i = 5
    while i * i <= number:
        if number % i == 0 or number % (i + 2) == 0:
            return False
        i += 6
    return True
    
def main():
    quant = int(input())
    for i in range(quant):
        x = int(input())
        if(x<=3):
            print("-1")
            continue
        temp = x//2
        for i in range(temp, 0, -1):
            if not is_prime(i) and not is_prime(x - i):
                print(i, x - i)
                break
        else:
            print("-1")

main()
