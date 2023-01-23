// Harasees has an array AA of size NN containing non-negative integers. He starts at the index 11 of AA and wants to reach the index NN. In one move, he can do the following:

// If he is currently at index ii, then he can move to any index jj such that i \le j \le \min(i + A_i, N)i≤j≤min(i+A 
// i
// ​
//  ,N).
// The cost of a path is defined as the bitwise OR of all the array elements visited by Harasees during his journey from index 11 to NN. Formally if he visited the indices 1, X_1, X_2, \ldots, X_K, N1,X 
// 1
// ​
//  ,X 
// 2
// ​
//  ,…,X 
// K
// ​
//  ,N, then the cost of this path = (A_1 \ | \ A_{X_1} \ | \ A_{X_2} \ | \ \ldots \ | \ A_{X_K} \ | \ A_N)=(A 
// 1
// ​
//   ∣ A 
// X 
// 1
// ​
 
// ​
//   ∣ A 
// X 
// 2
// ​
 
// ​
//   ∣ … ∣ A 
// X 
// K
// ​
 
// ​
//   ∣ A 
// N
// ​
//  ).

// Determine the minimum possible cost to reach index NN from index 11. If it is not possible to do so, output -1−1.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer NN - the length of the array AA.
// The next line contains NN space-separated integers A_1, A_2, \dots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   denoting the array AA.
// Output Format
// For each test case, output the minimum cost to go from index 11 to index NN using the given moves. If it is not possible to do so, output -1−1.

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 1 \leq N \leq 5 \cdot 10^51≤N≤5⋅10 
// 5
 
// 0 \leq A_i \leq 5 \cdot 10^50≤A 
// i
// ​
//  ≤5⋅10 
// 5
 
// The sum of NN over all test cases won't exceed 5 \cdot 10^55⋅10 
// 5
//  .
