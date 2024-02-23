# MD5 algorithm implementation with OpenSSL

This is a simple implementation of the MD5 algorithm using OpenSSL library

## Usage

First clone the repository:

```bash
git clone https://github.com/chrisarevalo11/md5.git
```

Compile the script linking the OpenSSL library:

```bash
g++ -o md5 md5.cpp -lssl -lcrypto
```

Run the script:

```bash
./md5
```
