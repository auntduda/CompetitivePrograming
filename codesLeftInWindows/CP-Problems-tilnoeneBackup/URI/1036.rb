n = gets.split(' ')
a = n[0].to_f
b = n[1].to_f
c = n[2].to_f

delta = b*b-4*a*c

if a==0 or delta<0
    puts "Impossivel calcular"
else
    puts "R1 = %0.05f" % ((-b+Math.sqrt(delta))/(2*a)).round(5)
    puts "R2 = %0.05f" % ((-b-Math.sqrt(delta))/(2*a)).round(5)
end