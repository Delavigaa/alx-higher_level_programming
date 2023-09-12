#!/usr/bin/node
const fint = process.argv[2];
const sint = process.argv[3];
function add (a, b) {
  if (fint === undefined || sint === undefined) {
    console.log(NaN);
  } else {
    console.log(parseInt(a) + parseInt(b));
  }
}
add(fint, sint);
