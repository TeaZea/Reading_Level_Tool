# Reading_Level_Tool

Program written in both C and python that will tell you the reading level of a sentence/paragraph by using the Coleman-Liau index.

Specifications:

- Use the Coleman-Liau index is computed as 0.0588 _ L - 0.296 _ S - 15.8, where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.
- Should count the number of letters, words, and sentences in the text. Also count spaces, punctuation, numbers and both lower and upper case letters.

Challenges {

    - Having trouble properly deciphering gr 8/9 reading level.
    - C version is having a library bug.

}

## Testing

- Type in One fish. Two fish. Red fish. Blue fish. and press enter. Your program should output Before Grade 1.
- Type in Would you like them here or there? I would not like them here or there. I would not like them anywhere. and press enter. Your program should output Grade 2.
- Type in Congratulations! Today is your day. You're off to Great Places! You're off and away! and press enter. Your program should output Grade 3.
- Type in Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard. and press enter. Your program should output Grade 5.
- Type in In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since. and press enter. Your program should output Grade 7.
- Type in Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do: once or twice she had peeped into the book her sister was reading, but it had no pictures or conversations in it, "and what is the use of a book," thought Alice "without pictures or conversation?" and press enter. Your program should output Grade 8.
- Type in When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh. and press enter. Your program should output Grade 8.
- Type in There are more things in Heaven and Earth, Horatio, than are dreamt of in your philosophy. and press enter. Your program should output Grade 9.
- Type in It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him. and press enter. Your program should output Grade 10.
- Type in A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains. and press enter. Your program should output Grade 16+.
