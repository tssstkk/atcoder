n, k = gets.split(" ").map(&:to_i)
ab = []
n.times do |i|
  ab.push(gets.split.map(&:to_i))
end
ab.sort_by!{|a,b| a}

j = 0
ans = 0
while true
  if (j == n)
    puts ans + k
    break
  elsif (k - (ab[j][0] - ans) < 0)
    puts ans + k
    break
  else
    k = k - (ab[j][0] - ans)
    k += ab[j][1]
    ans = ab[j][0]
    j += 1
  end
end
