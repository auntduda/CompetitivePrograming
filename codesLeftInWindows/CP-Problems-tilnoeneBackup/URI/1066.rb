pos=0
neg=0
par=0
imp=0

for i in 1..5 do
    a = gets.to_i
    if(a>0) then
        pos=pos+1
    elsif(a<0) then
        neg=neg+1
    end
    if(a%2==0) then
        par=par+1
    else
        imp=imp+1
    end
end

puts "#{par} valor(es) par(es)"
puts "#{imp} valor(es) impar(es)"
puts "#{pos} valor(es) positivo(s)"
puts "#{neg} valor(es) negativo(s)"
