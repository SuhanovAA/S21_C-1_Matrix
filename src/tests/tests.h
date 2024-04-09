#ifndef TESTS_MATRIX
#define TESTS_MATRIX

#include <check.h>

#include "../s21_matrix.h"

Suite* suite_eq_matrix(void);
Suite* suite_create_matrix(void);
Suite* suite_remove_matrix(void);
Suite* suite_sum_matrix(void);
Suite* suite_sub_matrix(void);
Suite* suite_mult_number_matrix(void);
Suite* suite_mult_matrix(void);
Suite* suite_transpose_matrix(void);
Suite* suite_calc_comp_matrix(void);
Suite* suite_determinant_matrix(void);
Suite* suite_inverse_matrix(void);

/**
 * @brief Заполнение матрицы double числами по строкам и столбцам матрицы. На
 * вход, кроме матрицы, подается два double-числа min и max, которые нужны для
 * создания переменной, используемой для заполнения.
 * @param *dst матрица для заполнения
 * @param min минимальная граница для формулы
 * @param max максимальная граница для формулы
 */
void fill_matrix(matrix_t* dst, double min, double max);
void s21_initialize_matrix(matrix_t* A, double start_value, double delta);
void run_testcase(Suite* testcase);

#endif  // TESTS_MATRIX