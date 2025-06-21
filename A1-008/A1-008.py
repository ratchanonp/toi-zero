thai_id = input().strip()

if len(thai_id) != 13:
    print("no")
elif not thai_id.isdigit():
    print("no")
else:
    print("yes")
