a=0
elf=0
h=0
m=0
x=0

n = io.read("*number")
for i=1,n do
    nome = io.read("*line")
    e = string.sub(nome, string.len(nome), string.len(nome))
    if(e=='A') then 
        a=a+1
    elseif(e=='E') then 
        elf=elf+1
    elseif(e=='H') then 
        h=h+1
    elseif(e=='M') then 
        m=m+1
    else 
        x=x+1
    end
end
print(x.." Hobbit(s)")
print(h.." Humano(s)")
print(elf.." Elfo(s)")
print(a.." Anao(s)")
print(m.." Mago(s)")
