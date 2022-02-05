n = gets.chomp

n_len = n.length

if n.to_i < 10
  tmp1 = n.to_i
else
  tmp1 = 9
end
tmp2 = 1
kosu = tmp1 - tmp2 + 1
sum = 0

n_len.times do |i|
  if i == 0
    #p [kosu, tmp2, tmp1, kosu * (2 * tmp2 + kosu - 1) / 2]
    sum += kosu * (2 * tmp2 + kosu - 1) / 2
    next
  end
  # 初項
  tmp2 = 1
  # 末項
  if n_len - 1 == i
    tmp1 = (n.to_i % 10 ** i + 1) + (n.to_i / 10 ** i) * 10 ** i - 10**i
  else
  	tmp1 = 10 ** (i + 1) - 10**i
  end
  # 項数
  kosu = tmp1 - tmp2 + 1

  #p [kosu, tmp2, tmp1, kosu * (2 * tmp2 + kosu - 1) / 2]
  sum += kosu * (2 * tmp2 + kosu - 1) / 2
end

puts sum % 998244353