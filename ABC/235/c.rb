n, q = gets.split(" ").map(&:to_i)
a = gets.split(" ").map(&:to_i)

hash = {}
a.length.times do |i|
  if hash.has_key?(a[i])
    hash[a[i]] << i + 1
  else
    hash[a[i]] = [i + 1]
  end
end

x = []
k = []
xk = []

while line = gets
  xk = line.split(" ").map(&:to_i)
  x << xk[0]
  k << xk[1]
end

x_len = x.length

x_len.times do |i|
  if hash[x[i]].nil? || hash[x[i]].length < k[i]
    puts -1
  else
    puts hash[x[i]][k[i] - 1]
  end
end
