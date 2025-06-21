vowel = ["a", "e", "i", "o", "u"]


def is_vowel(char):
    return char.lower() in vowel


if __name__ == "__main__":

    input_char = input()
    print("yes" if is_vowel(input_char) else "no")
