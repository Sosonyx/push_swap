import random

#Générer 5 listes de 500 entiers uniques, bien mélangées,
for i in range(1):
    unique_list = random.sample(range(1, 10000), 500)  # Grande plage pour éviter doublons
    print(f"Liste {i + 1}:")
    print(" ".join(map(str, unique_list)))
    print()