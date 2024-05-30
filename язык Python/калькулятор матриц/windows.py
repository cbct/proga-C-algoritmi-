import PySimpleGUI as sg


def matrix_enter():
    matrix_a_layout = [[sg.Text('Матрица A:')],
                       [sg.InputText(key='-1.1-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='-1.2-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='-1.3-', size=2, default_text='0', justification='centre')],
                       [sg.InputText(key='-2.1-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='-2.2-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='-2.3-', size=2, default_text='0', justification='centre')],
                       [sg.InputText(key='-3.1-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='-3.2-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='-3.3-', size=2, default_text='0', justification='centre')]
                       ]

    matrix_operations_layout = [
        [sg.Button('*', key='-*-', size=1)],
        [sg.Button('+', key='-+-', size=1)],
        [sg.Button('-', key='---', size=1)]
    ]

    matrix_b_layout = [[sg.Text('Матрица B:')],
                       [sg.InputText(key='b-1.1-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='b-1.2-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='b-1.3-', size=2, default_text='0', justification='centre')],
                       [sg.InputText(key='b-2.1-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='b-2.2-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='b-2.3-', size=2, default_text='0', justification='centre')],
                       [sg.InputText(key='b-3.1-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='b-3.2-', size=2, default_text='0', justification='centre'),
                        sg.InputText(key='b-3.3-', size=2, default_text='0', justification='centre')]
                       ]

    operations = [
        [sg.Button('Найти определитель матрицы A', key='-DET-', size=(30, 1)),
         sg.Button('Найти обратную матрицы A', key='-INV-', size=(30, 1))],
        [sg.Button('Транспонировать матрицу A', key='-TRANS-', size=(30, 1)),
         sg.Button('Найти ранг матрицы A', key='-RANK-', size=(30, 1))],
        [sg.Button('Умножить матрицу A на', key='-MULT-', size=(27, 1), pad=((5, 3), (3, 3))),
         sg.InputText(size=(2, 1), expand_y=True, key='-MULT_BY-', default_text=2, justification='centre'),
         sg.Button('Возвести матрицу A в степень', key='-EXP-', size=(27, 1), pad=((5, 3), (3, 3))),
         sg.InputText(size=(2, 1), expand_y=True, key='-EXP_BY-', default_text=2, justification='centre')]
    ]

    layout = [
        [sg.Text('Матричный калькулятор', expand_x=True, justification='centre', font='Any 20', pad=20)],
        # [sg.Text('Введите желаемый размер матрицы:'),
        #    sg.InputText(key='-ROW-', size=3),
        #    sg.Text('x', background_color='lightgrey', text_color='black'),
        #    sg.InputText(key='-COL-', size=3),
        #    sg.Button('Сохранить матрицы', key='-MATRIX_CREATE-')],
        [sg.Column(layout=matrix_a_layout),
         sg.Column(layout=matrix_operations_layout,
                   background_color='lightgrey'),
         sg.Column(layout=matrix_b_layout),
         sg.Column(layout=operations)]
    ]

    window = sg.Window('Matrix Calculator', layout,
                       font='Arial 12 bold',
                       background_color='lightgrey',
                       grab_anywhere=True)
    return window
