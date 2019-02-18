Seive of Eratosthenes:
  This is an ancient algorithm used to find all the primes between 1 and any number n. This algorithm 
  turns out to be more efficient when it is required to check, from a list of numbers, whether the number
  is prime or not, with this algorithm all the primes are stored in a list, hence it can be known just by
  checking with this list.
  
Method:
  ==> Store a list of numbers from 2 to n(given)(1 is not a prime anyways),
  ==> let, p = 2, mark all the numbers that are multiples of p like, 2p, 3p
      upto n, but not mark p,
  ==> the value of p now is the next unmarked number in the list, and repeat
      step 2 till reaching p = n.
      
Algorithm animation:
  ![Sieve of Eratosthenes animation](https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif)
  
  
