alphabet={}
alphabet[" "]="00000"
alphabet["a"]="00001"
alphabet["b"]="00010"
alphabet["c"]="00011"
alphabet["d"]="00100"
alphabet["e"]="00101"
alphabet["f"]="00110"
alphabet["g"]="00111"
alphabet["h"]="01000"
alphabet["i"]="01001"
alphabet["j"]="01010"
alphabet["k"]="01011"
alphabet["l"]="01100"
alphabet["m"]="01101"
alphabet["n"]="01110"
alphabet["o"]="01111"
alphabet["p"]="10000"
alphabet["q"]="10001"
alphabet["r"]="10010"
alphabet["s"]="10011"
alphabet["t"]="10100"
alphabet["u"]="10101"
alphabet["v"]="10110"
alphabet["w"]="10111"
alphabet["x"]="11000"
alphabet["y"]="11001"
alphabet["z"]="11010"
# 01011"
# 01100"
# 01101"
# 01110"
# 01111"




alphabetback={}
alphabetback["00000"]=" "
alphabetback["00001"]="a"
alphabetback["00010"]="b"
alphabetback["00011"]="c"
alphabetback["00100"]="d"
alphabetback["00101"]="e"
alphabetback["00110"]="f"
alphabetback["00111"]="g"
alphabetback["01000"]="h"
alphabetback["01001"]="i"
alphabetback["01010"]="j"
alphabetback["01011"]="k"
alphabetback["01100"]="l"
alphabetback["01101"]="m"
alphabetback["01110"]="n"
alphabetback["01111"]="o"
alphabetback["10000"]="p"
alphabetback["10001"]="q"
alphabetback["10010"]="r"
alphabetback["10011"]="s"
alphabetback["10100"]="t"
alphabetback["10101"]="u"
alphabetback["10110"]="v"
alphabetback["10111"]="w"
alphabetback["11000"]="x"
alphabetback["11001"]="y"
alphabetback["11010"]="z"
alphabetback["01011"]=" "
alphabetback["01100"]=" "
alphabetback["01101"]=" "
alphabetback["01110"]=" "
alphabetback["01111"]=" "


sentence  = "i like to ski in the winter"
converted = "" 

for let in sentence:
    print alphabet[let]
    converted+=alphabet[let]
    
    
print converted









nletters=len(converted)/5
print nletters

sentence2=""

for i in range(nletters):

    istart = int(i*5)
    iend   = int((i+1)*5)
    
    print istart,iend
    print type(istart),type(iend)

    chunk = converted[istart:iend]

    print i,alphabetback[chunk]
    
    sentence2+=alphabetback[chunk]
    
    
print sentence2

#corruption

convertedCorrupt="101001000000110101001011000010100000101011000000000101000110001001000000100101111000001010101000001010000011000010010111110101001011001"

nletters=len(converted)/5
print nletters

sentence2=""

for i in range(nletters):

    istart = int(i*5)
    iend   = int((i+1)*5)
    
    print istart,iend
    print type(istart),type(iend)

    chunk = convertedCorrupt[istart:iend]

    print i,alphabetback[chunk]
    
    sentence2+=alphabetback[chunk]
    
    
print sentence2