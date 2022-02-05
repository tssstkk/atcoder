n = gets.chomp.to_i

if n >= 5
  puts "Yes"
elsif 2**n > n**2
  puts "Yes"
else
  puts "No"
end