n = gets.split(' ')
a = n[0].to_i
b = n[1].to_i
c = n[2].to_i
d = n[3].to_i

if b>c && d>a && c+d>a+b && c>0 && d>0 && a%2==0
    puts "Valores aceitos"
else
    puts "Valores nao aceitos"
end