def out(f):
    result = ''
    for i in range(1, f+1):
        result += str(i)
    return result

if __name__ == '__main__':
    n = int(input())
    print(out(n))