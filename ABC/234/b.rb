n = gets.to_i

xy = []
n.times do
  xy << gets.split(" ").map(&:to_i)
end

max = 0
len = 0
n.times do |i|
  n.times do |j|
    len = Math.sqrt((xy[i][0] - xy[j][0])**2 + (xy[i][1] - xy[j][1])**2)
    if max < len
      max = len
    end
  end
end

puts max
