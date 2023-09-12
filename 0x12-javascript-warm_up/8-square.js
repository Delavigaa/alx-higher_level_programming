#!/usr/bin/node
const firstArg = process.argv[2];
const chr = 'x';
if (!isNaN(parseInt(firstArg))) {
  let intArg = firstArg;
  for (intArg; intArg > 0; intArg--) {
    console.log(chr.repeat(firstArg));
  }
} else {
  console.log('Missing number of occurrences');
}
