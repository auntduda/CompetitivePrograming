i=0
k=0
while i<=2 do
    if(k==0 || k==5 || k==10) then
        puts "I=#{i.round(0)} J=#{(i+1).round(0)}"
        puts "I=#{i.round(0)} J=#{(i+2).round(0)}"
        puts "I=#{i.round(0)} J=#{(i+3).round(0)}"
    else
        puts "I=#{i.round(1)} J=#{(i+1).round(1)}"
        puts "I=#{i.round(1)} J=#{(i+2).round(1)}"
        puts "I=#{i.round(1)} J=#{(i+3).round(1)}"
    end
    i=i+0.2
    k=k+1
end
