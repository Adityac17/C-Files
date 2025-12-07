#!/bin/bash
# count_down.sh

echo "Enter seconds to countdown:"
read n

while [ $n -gt 0 ]; do
    echo "$n seconds left..."
    sleep 1
    n=$((n-1))
done

echo "Time’s up!"
