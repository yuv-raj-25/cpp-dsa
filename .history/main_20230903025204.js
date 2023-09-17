function findPermutations(arr) {
    function permuteHelper(currentPerm, remainingElements) {
      if (remainingElements.length === 0) {
        permutations.push(currentPerm);
        return;
      }
  
      for (let i = 0; i < remainingElements.length; i++) {
        const newPerm = currentPerm.concat(remainingElements[i]);
        const newRemaining = remainingElements.slice(0, i).concat(remainingElements.slice(i + 1));
        permuteHelper(newPerm, newRemaining);
      }
    }
  
    const permutations = [];
    permuteHelper([], arr);
    return permutations;
  }
  
  // Example usage:
  const inputArray = [1, 2, 3];
  const result = findPermutations(inputArray);
  console.log(result);
  