# Atcoder
Just for practicing and storing.

## Structure

* ac-library
  * official library for atcoder.
  * added by [submodule](https://github.com/atcoder/ac-library)
* solver
  * store answer program
* static
  * store some configs

## Notes

Install `acc` and `oj`.
```
pip install online-judge-tools
npm install -g atcoder-cli
```

Also, you need login.
```
oj login https://atcoder.jp/
acc login
```

Lastly, config `acc`.
```sh
acc config default-template cpp
acc config default-test-dirname-format test
```

And make `cpp` directory.
Then, in that directory, set `main.cpp`(this will be template) and write it in `template.json`
```json
{
  "task": {
    "program": ["main.cpp"],
    "submit": "main.cpp"
  }
}
```

## Usage

First, load config.

```sh
cd static
source config.sh
```

Then, solve problem like below.

```sh
cd solver
acc new [contest_name]
cd [contest_name]
# write answer in main.cpp
cd a # problem string
t # this will build and test program
s # submit
```
