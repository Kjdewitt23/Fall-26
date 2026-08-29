#!/bin/bash

pi=3.14159
age=10
height=100000000
vehicle="quad"
real_height=8.5
rad=3

echo "When I was $age I was riding my $vehicle with my dad. I went a way I hadn't before and ended up driving off a cliff that felt like it was $height feet tall. In reality it was only about $real_height feet tall."

echo "The size of my long int is: 8 bytes."

echo "I don't have stdlib.h in bash so I'll use '$ RANDOM' to do a random number $RANDOM"

area=$(echo "$pi * ($rad * $rad)" | bc)

echo "Pi is: $pi"

echo "The area of the circle is $area"

bad=""

echo "This doesn't have a value $bad"
