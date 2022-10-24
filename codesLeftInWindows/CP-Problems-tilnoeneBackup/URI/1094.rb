n = gets.to_i
s=0
r=0
c=0

for i in 1..n do
    ns = gets.chomp.split(' ')
    v = ns[0].to_i
    animal = ns[1]
    if(animal=='C') then
        c+=v;
    elsif(animal=='R') then
        r+=v;
    else
        s+=v;
    end
end
soma = (c+r+s).to_f

puts "Total: #{c+r+s} cobaias"
puts "Total de coelhos: #{c}"
puts "Total de ratos: #{r}"
puts "Total de sapos: #{s}"
puts "Percentual de coelhos: %0.02f %%" % ((100*c)/soma).round(2)
puts "Percentual de ratos: %0.02f %%" % ((100*r)/soma).round(2)
puts "Percentual de sapos: %0.02f %%" % ((100*s)/soma).round(2)
    