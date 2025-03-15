/**
 * @param {string} secret
 * @param {string} guess
 * @return {string}
 */
var getHint = function (sequence, guess) {
    const found = {bull: 0, cow: 0};
    const visited = new Set();
  
    // count bulls
    for (let i = 0; i < sequence.length; i++) {
      if (sequence.charAt(i) === guess.charAt(i)) {
        found.bull++;
  
        // skip this index in cow test
        visited.add(i);
      }
    }
  
    // calculate frequency table for sequence
    const table = new Map();
    for (let i = 0; i < sequence.length; i++) {
      if (visited.has(i)) {
        continue;
      }
  
      const ch = sequence.charAt(i);
      if (table.has(ch)) {
        table.set(ch, table.get(ch) + 1)
      } else {
        table.set(ch, 1);
      }
    }
  
    for (let i = 0; i < guess.length; i++) {
      const ch = guess.charAt(i);
      if (visited.has(i)) {
        continue;
      }
  
      if (table.has(ch) && table.get(ch) !== 0) {
        found.cow++;
        table.set(ch, table.get(ch) - 1);
      }
    }
  
    return `${found.bull}A${found.cow}B`;
  };