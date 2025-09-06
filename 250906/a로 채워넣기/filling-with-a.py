s = input()
s_list = list(s)
s_list[1] = 'a'
s_list[len(s_list) - 2] = 'a'
s = "".join(s_list)
print(s)