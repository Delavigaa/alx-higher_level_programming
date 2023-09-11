#!/usr/bin/node

const firstArg = process.argv[2];

if (!isNaN(parseInt(firstArg))) {
  const integerValue = parseInt(firstArg);
  console.log(`My number: ${integerValue}`);
} else {
  console.log('Not a number');
}
