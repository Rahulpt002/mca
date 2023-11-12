list1 = ["Red", "Green", "White", "Black", "Pink", "Yellow"]
list2 = ["Green", "White", "Black"]
notinlist2 = [color for color in list1 if color not in list2]
print("Colors from list1 not in list2: ", notinlist2)