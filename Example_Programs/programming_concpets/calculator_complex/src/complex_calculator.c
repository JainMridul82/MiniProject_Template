#include "stdlib.h"
#include "complex_calculator.h"

error_t complex_sum(complex_t* cnum1, complex_t* cnum2, complex_t* csum)
{
    if(NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;
    
    
    csum->real = cnum1->real + cnum2->real;
    csum->imaginary = cnum1->imaginary + cnum2->imaginary;

    return SUCCESS;

}

error_t complex_diff(complex_t* cnum1, complex_t* cnum2, complex_t* csum)
{
    if(NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;
    
    
    csum->real = cnum1->real - cnum2->real;
    csum->imaginary = cnum1->imaginary - cnum2->imaginary;

    return SUCCESS;

}

error_t complex_multiply(complex_t *cnum1, complex_t *cnum2, complex_t *csum)
{
    if (NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;

    csum->real = cnum1->real * cnum2->real - cnum1->imaginary * cnum2->imaginary;
    csum->imaginary = cnum1->real * cnum2->imaginary + cnum1->imaginary * cnum1->real;

    return SUCCESS;
}

error_t complex_diff(complex_t *cnum1, complex_t *cnum2, complex_t *csum)
{
    if (NULL == cnum1 || NULL == cnum2)
        return ERROR_NULL_PTR;

    csum->real = cnum1->real / cnum2->real;
    csum->imaginary = cnum1->imaginary / cnum2->imaginary;

    return SUCCESS;
}
