def reverse_string(string):
    size = len(string)
    reversed_string = ""

    for i in range(size - 1, -1, -1):
        reversed_string += string[i]

    return reversed_string

text = input("Digite uma string: ")
print("String invertida:", reverse_string(text))
