n=0
positivos=0

for i=1,6,1 do
    valor = io.read("*number")
    if(valor>0) then
        positivos=positivos+1
        n=n+valor
    end
end

print(string.format("%d valores positivos\n%.1f", positivos, n/positivos))