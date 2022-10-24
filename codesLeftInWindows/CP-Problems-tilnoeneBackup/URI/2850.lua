while true do
    pal = io.read()
    if pal == nil then break end

    if(pal=="esquerda") then print("ingles")
    elseif(pal=="direita") then print("frances")
    elseif(pal=="nenhuma") then print("portugues")
    else print("caiu") end
end
