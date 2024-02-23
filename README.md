# atcoder
just for practicing and storing.

## structure
* ac-library
  * official library for atcoder.
  * added by [submodule](https://https://github.com/atcoder/ac-library)
* solver
  * store answer program
* template
  * store temlate code for specific algorithm
* .vscode
  * you need `ms-vscode.cpptools`.

## notes
install `acc` and `oj`
```
pip install online-judge-tools
npm install -g atcoder-cli
```

also, you need login
```
oj login https://atcoder.jp/
acc login
```

lastly, config `acc`
```sh
acc config default-template cpp
acc config default-test-dirname-format test
```

and make `cpp` directory.

then, in that directory, set `main.cpp`(this will be template) and write it in `template.json`
```json
{
  "task": {
    "program": ["main.cpp"],
    "submit": "main.cpp"
  }
}
```

## usage
```sh
cd solver
acc new [contest_name]
cd [contest_name]
...
# write answer in main.cpp
# Ctrl+Shift+b for build executable file
...
oj t
acc s
```
~~buildと`oj t`を一緒にやるスクリプトは用意していい気がする．~~
