# ================================================
# Script Name : arithmeticdemo.sh
# Description : Demonstrates arithmetic operations in shell scripting.
#
# Theory:
#   - Shell scripting supports integer arithmetic.
#   - Common ways to perform arithmetic:
#        1. Arithmetic Expansion: $(( expression ))
#        2. Using expr command: expr expression
#        3. Using let command: let expression
#   - Supported operators:
#        +  : addition
#        -  : subtraction
#        *  : multiplication
#        /  : division (integer division)
#        %  : modulo (remainder)
#        ** : exponentiation (Bash only)
#        ++ : increment
#        -- : decrement
#   - Parentheses can be used to control order of operations.
#
# Usage: zsh arithmetidemo.sh
# Author: Aarti Pardeshi
# Date  : Sept 2025
# ================================================


num1=10
num2=5

echo "Number_1 is $num1 and Number_2 is $num2"
echo "=== Using Arithmetic Expansion \$(( )) ==="
echo "Addition: $((num1 + num2))"
echo "Subtraction: $((num1 - num2))"
echo "Multiplication: $((num1 * num2))"
echo "Division: $((num1 / num2))"
echo "Modulo: $((num1 % num2))"
echo "Exponentiation: $((num1 ** 2))"
echo "Increment num1: $((num1 + 1))"
echo "Decrement num2: $((num2 - 1))"
echo "Combined expression: $(((num1 + num2) * 2))"

echo
echo "=== Using expr Command ==="
expr_add=$(expr $num1 + $num2)
expr_sub=$(expr $num1 - $num2)
expr_mul=$(expr $num1 \* $num2)   # * must be escaped
expr_div=$(expr $num1 / $num2)
expr_mod=$(expr $num1 % $num2)
expr_combined=$(expr \( $num1 + $num2 \) \* 2)

echo "Addition: $expr_add"
echo "Subtraction: $expr_sub"
echo "Multiplication: $expr_mul"
echo "Division: $expr_div"
echo "Modulo: $expr_mod"
echo "Combined expression (10+5)*2 : $expr_combined"

echo
echo "=== Using let Command ==="
let sum_add=num1+num2
let sum_sub=num1-num2
let sum_mul=num1*num2
let sum_div=num1/num2
let sum_mod=num1%num2
let num1++   # increment
let num2--   # decrement
let combined=(num1+num2)*2

echo "Addition: $sum_add"
echo "Subtraction: $sum_sub"
echo "Multiplication: $sum_mul"
echo "Division: $sum_div"
echo "Modulo: $sum_mod"
echo "Incremented num1: $num1"
echo "Decremented num2: $num2"
echo "Combined expression: $combined"

