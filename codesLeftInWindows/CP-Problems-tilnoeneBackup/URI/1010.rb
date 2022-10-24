a = gets.split()
b = gets.split()
puts "VALOR A PAGAR: R$ %0.02f" % (a[1].to_i*a[2].to_f+b[1].to_i*b[2].to_f).round(2)