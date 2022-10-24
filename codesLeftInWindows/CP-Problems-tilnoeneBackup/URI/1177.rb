k=0
v = gets.to_i
for i in 0..999 do
    puts("N["+i.to_s+"] = "+k.to_s);
    if(k==v-1) then
        k=0
    else
        k=k+1
    end
end