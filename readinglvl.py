import re


def main():
    # Variables
    letters = 0
    words = 1
    sentences = 0

    # Input
    text = input("Input your text: ")
    # if not text.isalpha():
    #     print("Please enter only alphabetical characters for your input.")

    # Count letters
    letters = len(text) - text.count(" ") - text.count(".") - text.count("!") - text.count("?")
    # for l in range(len(text)):
    #     if text[l].isalpha():
    #         letters += 1

    # Count words
    # words = len(re.findall(r"\w+", text))
    for i in range(len(text)):
        if (i == 0 and text[i] != " ") or (i != len(text) - 1 and text[i] == " " and text[i + 1] != " "):
            words += 1

    # Count Sentences
    for s in text:
        if s.count("."):
            sentences += 1
        if s.count("?"):
            sentences += 1
        if s.count("!"):
            sentences += 1

    # Equation + new variables for equation
    L = letters / words * 100
    S = sentences / words * 100
    # cl_index = 0.0588 * L - 0.296 * S - 15.8
    index = round(0.0588 * L - 0.296 * S - 15.8)

    # Print checks
    # print(f"letters: {letters}")
    # print(f"words: {words}")
    # print(f"sentences: {sentences}")

    # Print grade statements
    if index < 1:
        print("Grade: Before Grade 1.")
    elif index >= 16:
        print("Grade: Grade 16+")
    else:
        print(f"Grade: {index}")



if __name__ == "__main__":
    main()