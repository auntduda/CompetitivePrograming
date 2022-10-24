ls = gets.chomp().split(' ')

a = ls[0].to_f
b = ls[1].to_f

puts "%0.02f%%" % ((b*100)/a-100)