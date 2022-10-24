n = gets.split(' ')
a = n[0].to_i
b = n[1].to_i

if a==1
    puts "Total: R$ %0.02f" % (b*4).round(2)
elsif a==2
    puts "Total: R$ %0.02f" % (b*4.5).round(2)
elsif a==3
    puts "Total: R$ %0.02f" % (b*5).round(2)
elsif a==4
    puts "Total: R$ %0.02f" % (b*2).round(2)
else
    puts "Total: R$ %0.02f" % (b*1.5).round(2)
end