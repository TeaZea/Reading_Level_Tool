# Reading Level Tool
### TLDR;
Small program that helps you find the reading level of a sentence/paragraph(s) by using the Coleman-Liau index. This is made with python, however the original verison was done in C.

---

### Setup
Update the System

```python
sudo apt-get update
```

Install virtual environment

```python
pip install virtualenv
```

Create your virtual enviornment

```python
 python<version> -m venv <virtual-environment-name>
```

Open the virtual environment

```python
source <environment name>/bin/activate
```

To get this repository, run the following command inside your git enabled terminal

```python
git clone https://github.com/TeaZea/Reading_Level_Tool.git
```

CD into the repo and run the .py file

```python
python readinglvl.py
```

---

### Overview of the code
The program is very basic. The only thing it specifically needs to run properly is the proper Coleman-Liau index algorythm which is: 0.0588 * L - 0.296 * S - 15.8, where 'L' = letters and 'S' = sentences. To do this properly, the program needs to count everything, including spaces and punctuation to assign them to the proper variables before running the equation. 

---

### Challenges
The most challenging aspect of this project was thinking outside the box on how to count the words and sentences.

---

# Testing
Type/copy & paste these into the input when prompted to see the output grade:
###### Grade 1
```
One fish. Two fish. Red fish. Blue fish.
```
###### Grade 2
```
Would you like them here or there? I would not like them here or there. I would not like them anywhere.
```
###### Grade 3
```
Congratulations! Today is your day. You're off to Great Places! You're off and away!
```
###### Grade 5
```
 Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.
```
###### Grade 7
```
In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.
```
###### Grade 8
```
Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do: once or twice she had peeped into the book her sister was reading, but it had no pictures or conversations in it, "and what is the use of a book," thought Alice "without pictures or conversation?"
```
###### Grade 8
```
When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh.
```
###### Grade 9
```
There are more things in Heaven and Earth, Horatio, than are dreamt of in your philosophy.
```
###### Grade 10
```
It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.
```
###### Grade 10
```
One fish. Two fish. Red fish. Blue fish. and press enter
```
###### Grade 16+
```
A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains.
```
