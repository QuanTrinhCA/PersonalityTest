# [Problem B: Personality Test](https://nbhspc21.kattis.com/contests/nbhspc21/problems/nbhspc21.personalitytest)

There are many kinds of personality tests, including those available at high school that are used to propose the kinds of jobs that would suit you best, based on your personality. In this question, we will analyze the results from a simple test.

We will assume that we have a test containing 20 multiple-choice questions (with options 1 to 4 rather than “a” to “d” for simplicity), with each of the options corresponding to one of the 4 personality types:

- When the person answers “1”, it means the person is a “leader”
- When the person answers “2”, it means the person is an “intellectual”
- When the person answers “3”, it means the person is very “social”
- When the person answers “4”, it means the person is very “practical”

A person answering these questions would not necessarily answer the same option for each question, most probably because a person could have a combination of these traits. However, there is always one that is most prevalent, and that is the one we would like to identify, for each person who took that test.

For each person answering the quiz, you have to count the number of times each answer was provided. Then you should identify the type that got the highest count and print that person’s personality type.

For example, in the example input below, we have 3 people who took the test. The counts are as follows, for each possible options:

- Person 1: # of 1’s = 10, # of 2’s = 3, # of 3’s = 6, # of 4’s = 1, so the highest is 1 (“leader”)
- Person 2: # of 1’s = 4, # of 2’s = 6, # of 3’s = 5, # of 4’s = 5, so the highest is 2 (“intellectual”)
- Person 3: # of 1’s = 4, # of 2’s = 0, # of 3’s = 7, # of 4’s = 9, so the highest is 4 (“practical”)

We guarantee that there will be no tie for such highest count.

## Input
Our input starts with the number of people who took that test, as a positive integer n. Then there are n lines, one per person. Each line contains 20 numbers separated by a space, as one number per question. You can assume that n <= 10.

## Output
The output has one personality-type word (leader, intellectual, social, or practical) per line, in the same order as the people in the input. Thus there are n lines of output.

## Sample Input 1
```
3
1 3 1 3 1 3 1 1 4 1 2 3 1 2 1 1 3 2 1 3
2 1 4 2 3 1 4 2 2 4 3 1 4 2 3 2 4 3 1 3
4 4 4 3 3 4 1 1 4 1 4 4 3 4 3 3 3 1 3 4
```

## Sample Output 1
```
leader
intellectual
practical
```
