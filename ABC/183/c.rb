n, k = gets.chomp.split(" ").map(&:to_i)
t = []
n.times do
  t << gets.chomp.split(" ").map(&:to_i)
end

perm = [*1..n-1].permutation.to_a

ans = 0
perm.length.times do |i|
  tmp = 0
  tmp += t[0][perm[i][0]]

  (perm[i].length - 1).times do |j|
    start = perm[i][j]
    stop = perm[i][j + 1]

    tmp += t[start][stop]
  end
  tmp += t[perm[i][perm[i].length - 1]][0]

  if tmp == k
    ans += 1
  end
end

puts ans