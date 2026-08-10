# for i in range(1,6):
#     for j in range(1,6):
#         print("*", end=" ")
#     print()
    
    
# for row in range(1,6):
#     for col in range(1,6):
#         print(col, end=" ")
#     print()


# 1 4 9 16 25 
# 1 4 9 16 25 
# 1 4 9 16 25 
# 1 4 9 16 25 
# 1 4 9 16 25
# for row in range(1,6):
#     for col in range(1,6):
#         print(col*col,end=" ")
#     print()


# a a a a a 
# b b b b b 
# c c c c c 
# d d d d d 
# e e e e e 
for row in range(1,6):
    for col in range(1,6):
        name=chr(ord("a")+(row-1))
        print(name,end=" ")
    print();