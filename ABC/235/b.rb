n = gets.to_i
h = gets.split(" ").map(&:to_i)

ans = 0
n.times do |i|
  if ans < h[i]
    ans = h[i]
  else
    break
  end
end
  
puts ans
