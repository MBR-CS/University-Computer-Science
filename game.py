
def TrueDisplay()->None:
    init_matrix = [[0 for j in range(5)] for i in range(5)]
    for i in range(5):
        if i == 0 :
            for j in range(5):
                init_matrix[i][j] = 1
        init_matrix[i][2] = 1
    for i in range(5):
            print(init_matrix[i])


def FalseDisplay()->None:
    init_matrix = [[0 for j in range(5)] for i in range(5)]
    for i in range(5):
        if i == 0 :
            for j in range(5):
                init_matrix[i][j] = 1
        if i == 2 :
            for j in range(5):
                init_matrix[2][j] = 1
        init_matrix[i][0] = 1
    for i in range(5):
        print(init_matrix[i])

def main():
    kids_number = int(input('please enter a number: '))
    if kids_number > 5:
        TrueDisplay()
    else:
        FalseDisplay()

if __name__ == "__main__":
    main()
