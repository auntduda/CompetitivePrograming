n=0
positivos=0

for i in 1..6 do
    valor = gets.to_f
    if(valor>0) then
        positivos+=1
        n=n+valor
    end
end

puts "#{positivos} valores positivos\n%0.01f\n" % (n/positivos).round(2)
