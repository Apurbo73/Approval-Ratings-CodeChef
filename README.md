# Approval Ratings CodeChef


This C++ program processes multiple test cases where each test case consists of five scores. It calculates the total score, and if the total is already 35 or more, it outputs `0` (indicating no additional action or cost is needed). If the total is less than 35, the program tries to increase the score by "upgrading" the lowest scores to 10, one by one, until the total reaches at least 35.

Each upgrade costs 100 coins. The program sorts the scores in ascending order to prioritize boosting the lowest values first (which yields the most efficient gain). It then calculates the total gain required and adds coins accordingly. Finally, it prints the total coins used for that test case...
