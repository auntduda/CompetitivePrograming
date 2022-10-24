a = io.read("*number")
b = io.read("*number")
q = math.floor(a/b)
r = a%b

if(r<0) then
    if(a-((q-1)*b)>=0) then
        q=q-1
    else
        q=q+1
    end
    r = a-(q*b)
end
        
print(string.format("%d %d", q, r))