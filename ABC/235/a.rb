a, b, c = gets.split("").map(&:to_i)
sum = (100*a + 10*b + c) + (100*b + 10*c + a) + (100*c + 10*a + b)
p sum
