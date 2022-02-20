n = gets.chomp.to_i
s = []
tmp = []
n.times do
  tmp = gets.chomp
  if tmp[0] == "!"
    s << [tmp.slice(1..tmp.length), 3]
  else
    s << [tmp, 2]
  end
end

s.sort_by!{|v| v[0]}

ans = []
cnt = 0
s.length.times do |i|
  if i == 0
    ans[cnt] = s[i]
  end

  if s[i][0] == s[i - 1][0]
    ans[cnt][1] *= s[i][1]
  else
    cnt += 1
    ans[cnt] = s[i]
  end 
end

ans.length.times do |i|
  if ans[i][1] % 6 == 0
    puts ans[i][0]
    return
  end
end

puts "satisfiable"