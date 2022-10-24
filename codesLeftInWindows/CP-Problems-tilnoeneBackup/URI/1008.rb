a = gets.to_i
b = gets.to_i
c = gets.to_f

puts "NUMBER = #{a}\nSALARY = U$ %0.02f" % (b*c).round(2)