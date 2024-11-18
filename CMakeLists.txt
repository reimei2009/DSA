cmake_minimum_required(VERSION 3.29)
project(DSA)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include/part1
        include/ex_part1
        include/part2
        include/ex_part2
        include/part3
        include/ex_part3
        include/part4
        include/part5/sort
        include/part5/searching
        )


add_executable(leetcode
        src/leetcode/_1832_CheckPangram.cpp
        src/leetcode/_121_BuyAndSellStock.cpp
        src/leetcode/_112_PathSum.cpp
        src/leetcode/3264_FinalArrayStateAfterKMultiplication.cpp
        src/leetcode/_796_RotateString.cpp
        src/leetcode/_509_Fibonacci.cpp
        src/leetcode/_100_SameTree.cpp
        src/leetcode/_9_PalindromeNumber.cpp
        src/leetcode/_704_BinarySearch.cpp
)

add_executable(part1_primeNumber
        src/part1/primeNumber.cpp
        include/part1/primeNumber.h
)

add_executable(part1_gcd
        src/part1/gcd.cpp
        include/part1/gcd.h
)

add_executable(part1_mod
        src/part1/mod.cpp
        include/part1/mod.h
)

add_executable(part1_combination
        src/part1/combination.cpp
        include/part1/combination.h
)

add_executable(part1_maxX
        src/part1/maxX.cpp
        include/part1/maxX.h
)


add_executable(ex_part1_sieve
        src/ex_part1/sieve.cpp
        include/ex_part1/sieve.h
)

add_executable(ex_part1_ex7
        src/ex_part1/ex7.cpp
        include/ex_part1/ex7.h
)

add_executable(ex_part1_ex10
        src/ex_part1/ex10.cpp
        include/ex_part1/ex10.h
)

add_executable(part2
        src/part2/aboutString.cpp
        include/part2/aboutString.h
)

add_executable(part2_char
        src/part2/char.cpp
        include/part2/char.h)

add_executable(part2_vector
        src/part2/aboutVector.cpp
        include/part2/aboutVector.h)

add_executable(part2_set
        include/part2/aboutSet.h
        src/part2/aboutSet.cpp)

add_executable(ex_part2_ex1_5
        src/ex_part2/ex1_5.cpp
        include/ex_part2/ex1_5.h
)

add_executable(ex_part2_ex6_10
        src/ex_part2/ex6_9.cpp
        include/ex_part2/ex6_9.h)

add_executable(ex_part2_textNormalizationAndProcessing
        src/ex_part2/textNormalizationAndProcessing.cpp
)

add_executable(part3_pair
        src/part3/pair.cpp
        include/part3/pair.h
        )

add_executable(part3_map
        src/part3/aboutMap.cpp
        include/part3/aboutMap.h)

add_executable(ex_part3_ex1
        src/ex_part3/ex3_1.cpp
        include/ex_part3/ex3_1.h
        )

add_executable(ex_part3_ex2
        src/ex_part3/ex3_2.cpp
        include/ex_part3/ex3_2.h)

add_executable(part4_Generation
        src/part4/aboutGeneration.cpp
        include/part4/aboutGeneration.h)

add_executable(part5_searching_linear
        src/part5/searching/linearSearch.cpp
        include/part5/searching/linearSearch.h
)

add_executable(part5_searching_binary
        src/part5/searching/binarySearch.cpp
        include/part5/searching/binarySearch.h)

add_executable(part5_sort_sortUseLibrary
        src/part5/sort/sortUseLibrary.cpp
        include/part5/sort/sortUseLibrary.h)

add_executable(part5_sort_implementSort
        src/part5/sort/implementSort.cpp
        include/part5/sort/implementSort.h)

