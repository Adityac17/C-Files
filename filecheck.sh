file="myscript.sh"
echo $file

if [ ! -f $file ]; then
   echo "File does not exist: $file"
else
   echo "File found $file"
fi


