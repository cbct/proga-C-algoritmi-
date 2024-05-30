import PySimpleGUI as sg
import numpy as np
import windows


def triangle_matrix(matrix):       
    global count
    col = 0
    count = 0
    matrix = matrix.copy()
    for i in range(len(matrix) - 1):
        for row in range(col + 1, len(matrix)):
            if matrix[col, col] == 0:
                matrix[:, [col, -1]] = matrix[:, [-1, col]]
                count += 1
            matrix[row] = matrix[row] - matrix[col] * (matrix[row, col] / matrix[col, col])
        col += 1
    return matrix


def det(matrix):                        # расчет определителя матрицы
    matrix = triangle_matrix(matrix)           
    det_matrix = 1
    for diagonal in range(len(matrix)):
        det_matrix *= matrix[diagonal, diagonal]
    det_matrix *= (-1) ** count
    print(f'Определитель матрицы A равен: {det_matrix:g}')
    return det_matrix


def inverted_matrix(matrix):        # обратная матрицу
    matrix = matrix.copy()
    if det(matrix) == 0:
        print('Обратная матрица не существует, так как определитель равен 0')
    else:
        col = 0
        col_r = len(matrix) - 1
        e = np.random.randint(0, 1, size=(len(matrix), len(matrix[0])))
        for diagonal in range(len(matrix)):
            e[diagonal, diagonal] += 1
        matrix = np.append(matrix, e, axis=1)
        for i in range(len(matrix) - 1):
            for row in range(col + 1, len(matrix)):
                matrix[row] = matrix[row] - matrix[col] * (matrix[row, col] / matrix[col, col])
            col += 1
        for i in range(len(matrix) - 1):
            for row in range(col_r - 1, -1, -1):
                matrix[row] = matrix[row] - matrix[col_r] * (matrix[row, col_r] / matrix[col_r, col_r])
            col_r -= 1
        for diagonal in range(len(matrix)):
            matrix[diagonal] *= 1 / matrix[diagonal, diagonal]
        print(f'Обратная матрице A: \n{np.round(matrix[:, len(matrix):], 1)}')
        return matrix[:, len(matrix):]


def transpose(matrix):                  # транспонирует
    matrix = matrix.copy()
    matrix = np.array(list(map(list, zip(*matrix))))
    print(f'Транспонированная матрица A: \n{matrix.astype(int)}')
    return matrix


def rank(matrix):
    matrix = matrix.copy()
    matrix = triangle_matrix(matrix)
    rank_count = 0
    for row in range(len(matrix)):
        if matrix[row, -1] != 0:
            rank_count += 1
    print(f'Ранг матрицы A равен: {rank_count}')
    return rank_count


def matrix_prod(matrix_a, matrix_b):
    matrix_a = matrix_a.copy()
    matrix_b = matrix_b.copy()
    matrix_c = np.random.randint(0, 1, size=(len(matrix_a), len(matrix_b[0]))).astype('float')
    if len(matrix_a[0]) != len(matrix_b):
        return 'Умножение невозможно'
    row = 0
    for i in range(len(matrix_a)):
        for col in range(len(matrix_b[0])):
            matrix_c[row, col] = sum(matrix_a[row] * matrix_b[:, col])
        row += 1
    print(f'Результат умножения матрицы A на B: \n{np.round(matrix_c, 1)}')
    return matrix_c
