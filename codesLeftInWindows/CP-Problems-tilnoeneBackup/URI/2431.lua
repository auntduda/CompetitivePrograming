function split(inprinttr, sep)
    if sep == nil then
            sep = "%s"
    end
    local t={}
    for str in string.gmatch(inprinttr, "([^"..sep.."]+)") do
            table.insert(t, str)
    end
    return t
end

function min(a, b)
    if a < b then return a else return b end
end

function dentro(x, y, a, b)
    if(x <= a and y <= b) then return true end
    return false
end

a1 = io.read("*number")
b1 = io.read("*number")
a2 = io.read("*number")
b2 = io.read("*number")
a = io.read("*number")
b = io.read("*number")

ans = false
c1x = b1 + a2;
c1y = min(a1, b2)

if(dentro(a, b, a1, b1) or dentro(b, a, a1, b1) or dentro(a, b, a2, b2) or dentro(b, a, a2, b2)) then
    print("S")
    ans = true
elseif(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)) then
    print("S")
    ans = true
else
    c1x = a1 + b2;
    c1y = min(b1, a2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)) then
        print("S")
        ans = true
    end
    c1x = a1 + a2;
    c1y = min(b1, b2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)) then
        print("S")
        ans = true
    end
    c1x = b1 + b2;
    c1y = min(a1, a2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)) then
        print("S")
        ans = true
    end
    if not ans then
        print("N")
    end
end