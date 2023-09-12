#!/usr/bin/node
const fint = process.argv[2];
function fact (a) {
  a = parseInt(a);
  if (a === undefined || a <= 1) {
    return 1;
  } else {
    if (a < 333) {
      return a * fact(a - 1);
    } else {
      return 'Infinity';
    }
  }
}
console.log(fact(fint));
