Excluded a.out from the repository (and all future ones) with this assignment, as it's redundant to store test logs. Comments are for less so explaining code, and more so my choices in said code, like specific organization of the variables and whatnot. Those who are reading it understand what it does, no need to reteach it to them.\
Realized that technically, I was meant to use nums instead of vec in functions – makes no difference in functionality, but is technically the way I was meant to do it.\
That said, I have seldom ever used the "correct" variable names, and using custom ones has always made life easier, so I'm going to stick by it as long as my code still works.\
Mass change commit 1 notes:
- Edited the only_odds function to account for negative values (cuz why not)
- Implemented nums_median, an absolutely hellish task because I spent almost 3 hours debugging an issue that was in the HEADER THE ENTIRE TIME
- Initialized mean in nums_mean to 0 for cleanliness and no usage of random values in memory
Note: Changed num_vector_sum to num_vector_product – may not be what's in the textbook, but it annoyed me too much.\
