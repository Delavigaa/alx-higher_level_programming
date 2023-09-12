#!/usr/bin/node
const firstArg = process.argv[2];
const qout = 'C is fun';
if (!isNaN(parseInt(firstArg))) {
  let intArg = firstArg;
  for (intArg; intArg > 0; intArg--) {
    console.log(qout);
  }
} else {
  console.log('Missing number of occurrences');
}
