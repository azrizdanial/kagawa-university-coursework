def ifrom(n):
    while True:
        yield n
        n += 1

def sieve(n, xs):
    for i in xs:
        if i % n != 0:
            yield i

def primes():
    xs = ifrom(2)
    while True:
        n = next(xs)
        yield n
        xs = sieve(n, xs)

if __name__ == '__main__':       
    for i, p in zip(range(20), primes()):
        print(p, end=' ')