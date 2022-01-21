def f(t)
  t ** 2 + 2 * t + 3
end

t = gets.to_i
ans = f(f(f(t) + t) + f(f(t)))
puts ans
