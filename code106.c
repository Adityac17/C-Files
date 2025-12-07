#!/bin/bash
# bonus_calc.sh - Employee Bonus Calculation Script

echo "=========================================="
echo "   EMPLOYEE BONUS CALCULATION REPORT"
echo "=========================================="
echo ""

awk -F, '
BEGIN {
    printf "%-20s %-15s %12s %15s %15s\n", "Name", "Department", "Base Salary", "Bonus", "Final Salary"
    printf "%-20s %-15s %12s %15s %15s\n", "----", "----------", "-----------", "-----", "------------"
}
NR > 1 {
    name = $1
    dept = $2
    salary = $3
    
    # Calculate bonus using if-else
    if (dept == "HR") {
        bonus_rate = 0.05
    } else {
        bonus_rate = 0.07
    }
    
    bonus = salary * bonus_rate
    final_salary = salary + bonus
    
    # Print formatted output
    printf "%-20s %-15s $%11.2f $%14.2f $%14.2f\n", name, dept, salary, bonus, final_salary
}
END {
    print ""
    print "=========================================="
}' employees.csv
