import os

file_path = "hand_shake.txt"


def main():

    file = open(file_path, 'r')

    while os.stat(file_path).st_size == 0:

        pass

    print(file.read())
    file.close()


if __name__ == '__main__':
    main()