n = gets.chomp.to_i
a = gets.chomp.split(" ").map(&:to_i)

now = 0
b = [0]
a.length.times do |i|
  now += a[i]
  if now >= 360
    now -= 360
  end
  b << now
end

b.sort!

max = 0

if b.length == 1
end

b.length.times do |i|
  if i == 0
    if max < 360 - b[b.length - 1]
      max = 360 - b[b.length - 1]
    end
  end

  if max < b[i] - b[i - 1]
    max = b[i] - b[i - 1]
  end
end

puts max