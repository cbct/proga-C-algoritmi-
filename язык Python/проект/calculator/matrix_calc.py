import PySimpleGUI as sg
import numpy as np
import windows
import functions


if __name__ == '__main__':
    window = windows.matrix_enter()
    while True:
        event, matrix = window.read()
        matrix_a_list = [[matrix['-1.1-'], matrix['-1.2-'], matrix['-1.3-']],
                         [matrix['-2.1-'], matrix['-2.2-'], matrix['-2.3-']],
                         [matrix['-3.1-'], matrix['-3.2-'], matrix['-3.3-']]]

        matrix_b_list = [[matrix['b-1.1-'], matrix['b-1.2-'], matrix['b-1.3-']],
                         [matrix['b-2.1-'], matrix['b-2.2-'], matrix['b-2.3-']],
                         [matrix['b-3.1-'], matrix['b-3.2-'], matrix['b-3.3-']]]
        matrix_a_created = np.array(matrix_a_list, dtype=float)
        matrix_b_created = np.array(matrix_b_list, dtype=float)
        if event == sg.WIN_CLOSED:
            break
        if event == '-DET-':
            functions.det(matrix_a_created)
        if event == '-INV-':
            functions.inverted_matrix(matrix_a_created)
        if event == '-TRANS-':
            functions.transpose(matrix_a_created)
        if event == '-RANK-':
            functions.rank(matrix_a_created)
        if event == '-MULT-':
            print(f'Матрица A умноженная на {matrix["-MULT_BY-"]}: '
                  f'\n{np.round(matrix_a_created * int(matrix["-MULT_BY-"]), 1)}')
        if event == '-EXP-':
            print(f'Матрица A возведённая в степень {matrix["-EXP_BY-"]}: '
                  f'\n{np.round(matrix_a_created ** int(matrix["-EXP_BY-"]), 1)}')
        if event == '-*-':
            functions.matrix_prod(matrix_a_created, matrix_b_created)
        if event == '-+-':
            print(f'Результат сложения матрицы A и B: \n{np.round(matrix_a_created + matrix_b_created, 1)}')
        if event == '---':
            print(f'Результат вычитания матрицы B из A: \n{np.round(matrix_a_created - matrix_b_created, 1)}')
