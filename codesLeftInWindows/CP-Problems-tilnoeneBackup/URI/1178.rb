n = gets.to_f

for i in 0..99 do
    puts "N[#{i}] = %0.04f" % n
    n = n/2
end