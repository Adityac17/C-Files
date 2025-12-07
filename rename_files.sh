
# rename_files.sh

count=1
for file in *.txt; do
    mv "$file" "document_$count.txt"
    echo "Renamed $file → document_$count.txt"
    count=$((count+1))
done

