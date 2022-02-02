# code = "jack and jill went up the hill"
# for temp in code. split():
#     if(temp.endswith("ill")):
#         print("Count : ", code.count("ill"))
#         break

# code = code.replace('j','m')

# for temp in code.split():
#     if(len(temp)%2!=0):
#         temp_string = (str)(temp)
#         code = code.replace(temp_string, temp_string.upper())

# print(code)

# var1 = 5
# var2 = 5
# var3,var4 = 1,1
# var5 = 0

# print( (var1+var2)>(var2/var4) and var5 <=(var1-var3*var2) )
# print( (var3 == var4) and (var1>=var2) )

# def func(sample, res, key, val):
#     if(key in sample):
#         res = True
#         sample.update({key:val})
#     res = False

# res = None
# sample = {"XS":1,"X":0,"XL":3,"XXL":4}
# func(sample, res, "X",2)
# print(sample["X"],res)

# --------NEW PROGEAM------------
# list1 = [1,2,1,3,3,1,2,1,2,1]
# tuple1 = ("A","B","C","D")
# tuple1+= ("E",)
# list2=[]

# for var1 in range(5,len(list1)):
#     list2.append(list1[var1-5]+list1[var1])
# for var1 in range(0, len(list2)):
#     print(tuple1[var1], list2[var1])

# ------------ LAST PROGRAM ------------
my_str = "All3 that4 glitters8 is2 not3 gold4"
my_lst =[]

for char in my_str:
    if(char.isdigit()):
        my_lst.append((int)(char))
        my_str = my_str.replace(char," ")

print(my_str, my_lst)

my_str = "All3 that4 glitters8 is2 not3 gold4"
my_lst =[]

for char in my_str:
    if(char.isdigit()):
        my_lst.append(char)
        my_str = my_str.replace(char," ")

print(my_str, my_lst)