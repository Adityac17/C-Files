#Program to display use of variables
#variable définitions
Var_name="Aarti"
Var_age=39

# accessing the declared variables using $
echo "Name is $Var_name, and age is $Var_age."

# read-only variables
var_blood_group="O+"
readonly var_blood_group

echo "Blood group is $var_blood_group and you can't change its values as it is read only."

#echo
#var_blood_group="B+"

#echo "Error for read only variables, if trying to \
#modify them."

# unsetting variables
unset Var_age
echo "After \t unsetting var_age..."
echo	
echo "Name is $Var_name, blood group is $var_blood_group\
and age is $Var_age…"
