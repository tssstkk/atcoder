n = gets.to_i
a = gets.split.map(&:to_i)
a.sort!
sum = n * (n - 1) / 2
cnt = 1
n.times do |i|
  next if i == 0
  if a[i] == a[i - 1]
    cnt += 1
  else 
    if cnt >= 2
      sum -= cnt * (cnt - 1) / 2
    end
    cnt = 1
  end
end
if (cnt >= 2)
  sum -= cnt * (cnt - 1) / 2;
end
puts sum
