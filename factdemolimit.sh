#!/bin/bash
# factorial_limit.sh

limit=9223372036854775807   # 64-bit signed max
fact=1
for ((i=1; ; i++)); do
    fact=$(echo "$fact * $i" | bc)

    if [ "$(echo "$fact <= $limit" | bc)" -eq 1 ]; then
        echo "$i! = $fact"
    else
	echo "overflow happens at $i!"
	break
    fi
done

