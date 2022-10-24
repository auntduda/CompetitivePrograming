linha = gets.chomp().split(' ')
n = linha[0].to_i
m = linha[1].to_i

ter = Array.new(m)
val = 1
for i in 0..(n-1) do
    ter[i] = Array.new(n)
    ls = gets.chomp().split(' ')
    for j in 0..(m-1) do
        ter[i][j] = ls[j].to_i
    end
end
for i in 1..(n-2) do
    for j in 1..(m-2) do
        if(ter[i][j]==42 and ter[i-1][j-1]==7 and ter[i-1][j]==7 and ter[i-1][j+1]==7 and ter[i][j-1]==7 and ter[i][j+1]==7 and ter[i+1][j-1]==7 and ter[i+1][j]==7 and ter[i+1][j+1]==7) then
            puts "#{i+1} #{j+1}"
            val = 0
        end
    end
end
if(val==1) then
    puts "0 0"
end
