n = gets.chomp.to_i

s_map = []
n.times do |i|
  s = gets.chomp.split("")
  n.times do |j|
    if s[j] == "#"
      s_map << [i, j]
    end
  end
end

t_map = []
n.times do |i|
  t = gets.chomp.split("")
  n.times do |j|
    if t[j] == "#"
      t_map << [i, j]
    end
  end
end


if s_map.length != t_map.length
  puts "No"
  return
end

mx = t_map[0][0]
my = t_map[0][1]
t_map.length.times do |i|
  t_map[i][0] -= mx
  t_map[i][1] -= my
end

4.times do
  mx = s_map[0][0]
  my = s_map[0][1]
  
  s_map.length.times do |i|
    s_map[i][0] -= mx
    s_map[i][1] -= my
  end
  
  if s_map == t_map
    puts "Yes"
    return
  end
  
  s_map.length.times do |i|
    tmp = s_map[i][0]
    s_map[i][0] = s_map[i][1]
    s_map[i][1] = tmp * (-1)
  end
  
  s_map.sort!
end

puts "No"