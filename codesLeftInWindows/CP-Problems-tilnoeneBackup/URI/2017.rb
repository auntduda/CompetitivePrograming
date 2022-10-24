ori = gets.chomp()
k = gets.to_i

ig = 0
pos = 0

for i in 1..5 do
    temp = 0
    f = gets.chomp()
    for j in 0..(f.length-1) do
        if(f[j] == ori[j]) then
            temp += 1
        end
    end
            
    if(temp > ig) then
        ig = temp
        pos = i
    end
end

if(ori.length - ig > k) then puts(-1)
else
    puts(pos);
    puts(ori.length - ig)
end
