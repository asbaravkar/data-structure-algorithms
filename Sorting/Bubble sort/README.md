# Bubble Sort technique

1. Inplace and stable sorting technique.

2. Minimum iterations required
    Minimum - O(1)
    Avergae - O(n/2) = O(n)
    Maximum - O(n)
    
3. Cost of each iteration - O(n)

4. Complexity<br>
    Minimum - O(1)*O(n) = O(n)<br>
    Average - O(n)*O(n) = O(n^2)<br>
    Maximum - O(n)*O(n) = O(n^2)<br>
    
5. Best case - Increasing order (swaps = 0)<br>
   Worst case - Non-increasing order (swaps = n*(n-1)/2<br>
   
6. No. of inversion pairs depends upon no. of swaps<br>
    Minimum = 0 --> when swaps = 0<br>
    Maximum = n*(n-1)/2 --> when swaps = n*(n-1)/2<br>
    
 7. No.o f swaps<br>
      For n elements - there is one postive sequence and negative sequence<br>
      Example - input - 5 4 3 2 1<br>
                positive sequence - 5 4 3 2 1<br>
                negative sequence - -5 -4 -3 -2 -1<br>
      No. of swaps for positive + No. of swaps for negative = n*(n-1)/2<br>
      
  8. Average case calculation<br>
      For n elements - n! (+ve) and n! (-ve)<br>
      Total possibilities = 2*(n!)<br>
      No. of pairs = 2*(n!)/2 = n!<br>
      For each pair, swaps required = n*(n-1)/2<br>
      Therefore, for n! pairs = n!*[n*(n-1)/2]<br>
      For avergae case we divide by total number of possinilities<br>
      Average case = n!*[n*(n-1)/2] / 2! = n*(n-1)/4 <br>
