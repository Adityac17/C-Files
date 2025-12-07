#!/bin/bash
# disk_alert.sh

THRESHOLD=80

for part in $(df -h | awk 'NR>1 {print $6}'); do
    usage=$(df -h | grep " $part" | awk '{print $5}' | sed 's/%//')
    if [ $usage -ge $THRESHOLD ]; then
        echo "ALERT!!!! Partition $part is $usage% full!"
    else
        echo "Partition $part is safe ($usage%)"
    fi
done

