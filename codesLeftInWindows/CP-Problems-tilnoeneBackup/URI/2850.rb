while pal = gets
    pal = pal.chomp()
    if(pal=="esquerda") then puts("ingles")
    elsif(pal=="direita") then puts("frances")
    elsif(pal=="nenhuma") then puts("portugues")
    else puts("caiu") end
end
