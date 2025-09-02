# print(f"{(data := int(input()))}{'\nminus' if data < 0 else ''}")
print(f"{(data := int(input()))}{chr(10) + 'minus' if data < 0 else ''}")