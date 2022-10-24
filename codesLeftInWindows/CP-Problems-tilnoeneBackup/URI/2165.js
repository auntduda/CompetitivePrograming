var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

a = lines.shift()

if(a.length > 140) console.log("MUTE")
else console.log("TWEET")
