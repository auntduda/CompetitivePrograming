n = gets.to_i
    
fim = n
if(n%2!=0) then
    fim=n-1
end
    
for i in 2..fim do
    if(i%2==0) then
        puts "#{i}^2 = #{i*i}"
    end
end