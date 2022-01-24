n = gets.to_i
a = gets.split(" ").map(&:to_i)

sn = 2 * n * (1 + n)

sum = 0
a.length.times do |i|
  sum += a[i]
end

ans = sn - sum
puts ans
