ns = gets.chomp().split(' ')
a = ns[0].to_f
b = ns[1].to_f

puts "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %0.05f." % ((a*b)/2).round(5)
