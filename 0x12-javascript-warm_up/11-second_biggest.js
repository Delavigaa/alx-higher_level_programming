#!/usr/bin/node
const arg = process.argv.slice(2);
let fint = 0;
let y = arg[0];
if (arg.length === 0 || arg.length === 1) {
  console.log(0);
} else {
  for (const x of arg) {
    if (fint <= x) {
      y = fint;
      fint = x;
    } else if (y < x) {
      y = x;
    }
  }
  console.log(y);
}
