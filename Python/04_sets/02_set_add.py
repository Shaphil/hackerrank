if __name__ == "__main__":
    n = int(input())
    stamps = set()
    for i in range(n):
        stamp = input()
        stamps.add(stamp)
    
    print(len(stamps))
