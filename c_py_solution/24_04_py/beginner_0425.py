def test_case(n, f):
    # n의 뒤 두 자리를 00으로 만들기
    temp = (n // 100) * 100

    # f의 배수를 찾아 뒤 두 자리 반환
    while True:
        if temp % f == 0:
            res = temp % 100
            return format(res, '02')
        temp += 1


def main():
    n = int(input("n: "))
    f = int(input("f: "))
    result = test_case(n, f)
    print(result)


if __name__ == "__main__":
    main()