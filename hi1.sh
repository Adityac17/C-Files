fact=1; for i in $(seq 1 100); do fact=$(echo "$fact * $i" | bc); if [ "$(echo "$fact <= 9223372036854775807" | bc)" -eq 1 ]; then echo "$i! = $fact"; else echo "Overflow happens at $i!"; break; fi; done

