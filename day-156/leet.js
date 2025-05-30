/**
 * @param {string[]} words
 * @return {number}
 */
var uniqueMorseRepresentations = function(words) {
    let obj = {
    "a": ".-",
    "b": "-...",
    "c": "-.-.",
    "d": "-..",
    "e": ".",
    "f": "..-.",
    "g": "--.",
    "h": "....",
    "i": "..",
    "j": ".---",
    "k": "-.-",
    "l": ".-..",
    "m": "--",
    "n": "-.",
    "o": "---",
    "p": ".--.",
    "q": "--.-",
    "r": ".-.",
    "s": "...",
    "t": "-",
    "u": "..-",
    "v": "...-",
    "w": ".--",
    "x": "-..-",
    "y": "-.--",
    "z": "--.."
  }
  
  let currentIndexStr = ''

  for (let i = 0; i < words.length; i++) {
    let currentLength = words[i].length
    for (let j = 0; j < currentLength; j++) {
      currentIndexStr += obj[words[i][j]]
    }
    words[i] = currentIndexStr
    currentIndexStr = ''
  }

  return new Set(words).size
};