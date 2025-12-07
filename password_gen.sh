#!/bin/bash
# password_gen.sh

echo "Enter password length:"
read len

chars="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*"
pass=""

for ((i=1; i<=len; i++)); do
    rand=$((RANDOM % ${#chars}))
    pass="$pass${chars:$rand:1}"
done

echo "Your random password: $pass"


#code using openssl
echo "Enter password length:"
read len

# Generate a base64 random string using openssl
password=$(openssl rand -base64 48 | cut -c1-$len)

echo "Your random password: $password"
