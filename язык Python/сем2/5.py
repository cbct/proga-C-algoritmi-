import re

words = ["Speak ","to", "me ", "of", "Florence" ,"And ", "of", "the", "Renaissance"]
words_clean = []

for i in words:
    words_clean.append(re.sub(' ', '', i.lower()))

print(words_clean)










