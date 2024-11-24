text = input()

text = text.lower()
text = text.replace(',',' ')
text = text.replace('.',' ')
text = text.replace('。',' ')

words = text.split()

counts = {}

for word in words:
    if word in counts:
        counts[word] += 1
    else:
        counts[word] = 1

max_count = 0
ans = []

for word,count in counts.items():
    if count > max_count:
        max_count = count
        ans = [word]
    elif count == max_count:
        ans.append(word)

print(f"共有{len(ans)}个单词出现次数最多")
for word in ans:
    print(f"{word} 在段落中出现的次数是{max_count}")
