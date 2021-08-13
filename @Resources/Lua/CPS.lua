t={}
t2={}

function Update()
    e=SKIN:GetMeasure('Time'):GetValue()
    s=e-1
    local m2={}
    for k,v in pairs(t2) do
        if k>=s and k<=e then
            table.insert(m2, v)
        end
    end
    local m={}
    for k,v in pairs(t) do
        if k>=s and k<=e then
            table.insert(m, v)
        end
    end
    SKIN:Bang('!SetVariable', 'CPS', table.maxn(m))
    SKIN:Bang('!SetVariable', 'CPS2', table.maxn(m2))
end