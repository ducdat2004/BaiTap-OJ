rows = int(input("Nhập số hàng của mảng: "))
columns = int(input("Nhập số cột của mảng: "))

my_array = []

for i in range(rows):
    row = []
    for j in range(columns):
        element = int(input("Nhập phần tử hàng {} cột {}: ".format(i+1, j+1)))
        row.append(element)
    my_array.append(row)

print("Mảng đã nhập:")
for row in my_array:
    print(row)
