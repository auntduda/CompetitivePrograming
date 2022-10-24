n = gets.to_i
for i in 0..(n-1) do
    e = gets.chomp()
    ns = gets.chomp().split(' ')
    r = (ns[0]).to_i
    g = (ns[1]).to_i
    b = (ns[2]).to_i
    if(e=="min") then
       if(r<g) then
            if(r<b) then
                res = r
            else
                res = b
            end
        else
            if(g<b) then
                res = g
            else
                res = b
            end
        end
    elsif(e=="mean") then
        res = ((r+g+b)/3)
    elsif(e=="max") then
        if(r>g) then
            if(r>b) then
                res = r
            else
                res = b
            end
        else
            if(g>b) then
                res = g
            else
                res = b
            end
        end
    else
        res = ((0.3*r)+(0.59*g)+(0.11*b))
    end
    puts "Caso ##{(i+1)}: %d" % res.to_i
end
