nome = gets
a = gets.to_f
b = gets.to_f

puts "TOTAL = R$ %0.02f" % (0.15*b+a).round(2)