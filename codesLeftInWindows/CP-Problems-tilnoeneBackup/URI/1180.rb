n = gets.to_i
nums = gets.chomp().split(' ')
menor = (nums[0]).to_i
pos=1

for i in 1..(n-1) do
    if((nums[i]).to_i<menor) then
        menor = (nums[i]).to_i
        pos=i
    end
end
puts("Menor valor: #{menor}")
puts("Posicao: #{pos}")
