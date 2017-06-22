word = ["cat","mouse", "tiger", "lion"]
shortest = word[0]
if len(shortest)>len(word[0]):
    shortest = word
if len(shortest)>len(word[1]):
    shortest = word
if len(shortest)>len(word[2]):
    shortest = word
if len(shortest)>len(word[3]):
    shortest = word
print("가장 짧은 단어는",shortest)
