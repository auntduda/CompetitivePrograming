n = gets.to_i
vin=0
vout=0
    
for i in 1..n do
    v = gets.to_i
    if(v>=10 and v<=20) then
        vin=vin+1;
    else
        vout=vout+1;
    end
end

puts "#{vin} in"
puts "#{vout} out"