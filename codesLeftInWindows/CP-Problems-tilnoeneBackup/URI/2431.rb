def min(a, b)
    if a < b then return a else return b end
end

def dentro(x, y, a, b)
    if(x <= a and y <= b) then return true end
    return false
end

ls = gets.chomp().split(' ')

a1 = ls[0].to_i
b1 = ls[1].to_i
a2 = ls[2].to_i
b2 = ls[3].to_i
a = ls[4].to_i
b = ls[5].to_i

ans = false
c1x = b1 + a2;
c1y = min(a1, b2)

if(dentro(a, b, a1, b1) or dentro(b, a, a1, b1) or dentro(a, b, a2, b2) or dentro(b, a, a2, b2)) then
    puts("S")
    ans = true
elsif(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)) then
    puts("S")
    ans = true
else
    c1x = a1 + b2;
    c1y = min(b1, a2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)) then
        puts("S")
        ans = true
    end
    c1x = a1 + a2;
    c1y = min(b1, b2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)) then
        puts("S")
        ans = true
    end
    c1x = b1 + b2;
    c1y = min(a1, a2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)) then
        puts("S")
        ans = true
    end
    if not ans then
        puts("N")
    end
end