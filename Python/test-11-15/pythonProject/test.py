f = open("name.txt")
names = [name.strip() for name in f.readlines()]
f.close()
f = open("vote.txt")
votes = [vote.strip() for vote in f.readlines()]
f.close()
f = open("vote1.txt", "w")
D = {}
NUM = 0
for vote in votes:  # (1) 替换为 votes
    num = len(vote.split())
    if num == 1 and vote in names:  # (2) 替换为 names
        D[vote] = D.get(vote, 0) + 1  # (3) 替换为 D.get(vote, 0)
        NUM += 1
    else:
        f.write(vote + "\n")  # (4) 替换为 vote + "\n"
f.close()
l = list(D.items())
l.sort(key=lambda s: s[1], reverse=True)  # (5) 替换为 reverse=True
name = l[0][0]  # (6) 替换为 l[0][0]
score = l[0][1]  # (7) 替换为 l[0][1]
print("有效票数为：{} 当选村长村民为:{},票数为：{}".format(NUM, name, score))
